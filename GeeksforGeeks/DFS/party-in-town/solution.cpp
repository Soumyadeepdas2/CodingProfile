class Solution {
public:

    pair<int, int> bfs(vector<vector<int>>& adj, int start) {
        int n = adj.size();

        vector<int> dist(n, -1);
        queue<int> q;

        dist[start] = 0;
        q.push(start);

        int farthestNode = start;
        int farthestDist = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int x : adj[node]) {
                int next = x - 1;

                if (dist[next] == -1) {
                    dist[next] = dist[node] + 1;
                    q.push(next);

                    if (dist[next] > farthestDist) {
                        farthestDist = dist[next];
                        farthestNode = next;
                    }
                }
            }
        }

        return {farthestNode, farthestDist};
    }

    int partyHouse(vector<vector<int>>& adj) {

        auto first = bfs(adj, 0);

        int endpoint = first.first;

        auto second = bfs(adj, endpoint);

        int diameter = second.second;

        return (diameter + 1) / 2;
    }
};