#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

    int low = 0, high = n * m - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int row = mid / m;
        int col = mid % m;

        if (matrix[row][col] == target) {
            cout << "YES" << endl;
            return 0;
        }
        else if (matrix[row][col] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}