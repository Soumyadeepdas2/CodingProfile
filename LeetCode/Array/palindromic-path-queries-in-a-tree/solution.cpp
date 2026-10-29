class Solution {
public:
    vector<bool> palindromePath(
        int n,
        vector<vector<int>>& edges,
        string s,
        vector<string>& queries
    ) {
        vector<vector<int>> adj(n);

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        int LOG = 1;
        while ((1 << LOG) <= n) LOG++;

        vector<vector<int>> up(LOG, vector<int>(n, 0));
        vector<int> depth(n, 0);
        vector<int> tin(n), tout(n);
        vector<int> mask(n);
        int timer = 0;
        stack<tuple<int, int, int>> st;
        st.push({0, -1, 0});
        while (!st.empty()) {
            auto [u, p, state] = st.top();
            st.pop();
            if (state == 0) {
                up[0][u] = (p == -1 ? u : p);
                depth[u] = (p == -1 ? 0 : depth[p]);
                if (p != -1) depth[u]++;
                tin[u] = ++timer;
                st.push({u, p, 1});
                for (int i = (int)adj[u].size() - 1; i >= 0; i--) {
                    int v = adj[u][i];
                    if (v != p) {
                        st.push({v, u, 0});
                    }
                }
            } else {
                tout[u] = timer;
            }
        }
        for (int k = 1; k < LOG; k++) {
            for (int u = 0; u < n; u++) {
                up[k][u] = up[k - 1][up[k - 1][u]];
            }
        }
        vector<int> bit(n + 2, 0);
        auto add = [&](int i, int val) {
            for (; i < (int)bit.size(); i += i & -i) {
                bit[i] ^= val;
            }
        };
        auto prefixXor = [&](int i) {
            int result = 0;
            for (; i > 0; i -= i & -i) {
                result ^= bit[i];
            }
            return result;
        };
        auto rangeXor = [&](int l, int r, int val) {
            add(l, val);
            add(r + 1, val);
        };
        for (int u = 0; u < n; u++) {
            mask[u] = 1 << (s[u] - 'a');
            rangeXor(tin[u], tout[u], mask[u]);
        }
        auto lca = [&](int u, int v) {
            if (depth[u] < depth[v]) swap(u, v);
            int diff = depth[u] - depth[v];
            for (int k = 0; k < LOG; k++) {
                if (diff & (1 << k)) {
                    u = up[k][u];
                }
            }
            if (u == v) return u;
            for (int k = LOG - 1; k >= 0; k--) {
                if (up[k][u] != up[k][v]) {
                    u = up[k][u];
                    v = up[k][v];
                }
            }
            return up[0][u];
        };
        vector<bool> ans;
        for (string& q : queries) {
            string type;
            int u;
            stringstream ss(q);
            ss >> type >> u;
            if (type == "update") {
                char c;
                ss >> c;
                int newMask = 1 << (c - 'a');
                int delta = mask[u] ^ newMask;
                rangeXor(tin[u], tout[u], delta);
                mask[u] = newMask;
            } else {
                int v;
                ss >> v;
                int w = lca(u, v);
                int pathMask =
                    prefixXor(tin[u]) ^
                    prefixXor(tin[v]) ^
                    mask[w];
                ans.push_back(
                    pathMask == 0 ||
                    (pathMask & (pathMask - 1)) == 0
                );
            }
        }
        return ans;
    }
};