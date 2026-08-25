class Solution {
public:
    int minMoves(vector<int>& arr) {
        int n = arr.size();
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++)
            pos[arr[i]] = i;

        int maxRun = 1, curRun = 1;
        for (int v = 2; v <= n; v++) {
            if (pos[v] > pos[v - 1]) {
                curRun++;
            } else {
                curRun = 1;
            }
            maxRun = max(maxRun, curRun);
        }

        return n - maxRun;
    }
};