class Solution {
  public:
    vector<vector<int>> socialNetwork(vector<int>& arr) {
        int n = arr.size() + 1;

        vector<vector<int>> ans;

        for (int i = 2; i <= n; i++) {
            int cur = i;
            int dist = 0;

            while (cur > 1) {
                cur = arr[cur - 2];
                dist++;

                ans.push_back({i, cur, dist});
            }
        }

        sort(ans.begin(), ans.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] != b[0])
                return a[0] < b[0];

            return a[1] < b[1];
        });

        return ans;
    }
};