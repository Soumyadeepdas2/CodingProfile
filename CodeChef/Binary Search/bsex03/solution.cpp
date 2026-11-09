#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& boards, int k, long long mid) {
    int painters = 1;
    long long sum = 0;

    for (int i = 0; i < boards.size(); i++) {
        if (sum + boards[i] <= mid) {
            sum += boards[i];
        } else {
            painters++;
            sum = boards[i];
        }
    }

    return painters <= k;
}
long long painter_partition(vector<int>& boards, int k) {
    long long low = *max_element(boards.begin(), boards.end());
    long long high = 0;

    for (int x : boards) {
        high += x;
    }
    long long ans = high;
    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (isPossible(boards, k, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> boards(N);

        for (int i = 0; i < N; i++)
            cin >> boards[i];

        cout << painter_partition(boards, k) << endl;
    }
    return 0;
}