#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int dp[11][11] = {};

    for (int i = 0; i < n; i++) {
        dp[0][i] = 1;
        dp[i][0] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout << dp[n-1][n-1] << endl;
    return 0;
}