class Solution {
public:
    int ways(int x, int y) {
        const long long MOD = 1000000007;

        x = abs(x);
        y = abs(y);

        vector<vector<long long>> dp(x + 1,
                                     vector<long long>(y + 1, 1));

        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= y; j++) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }

        return dp[x][y];
    }
};