#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> nums;
    for (int i = 0; i <= 30; i++) {
        for (int j = i + 1; j <= 30; j++) {
            nums.push_back((1LL << i) + (1LL << j));
        }
    }
    sort(nums.begin(), nums.end());
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        auto it = lower_bound(nums.begin(), nums.end(), n);

        long long ans = LLONG_MAX;

        if (it != nums.end()) {
            ans = min(ans, *it - n);
        }

        if (it != nums.begin()) {
            --it;
            ans = min(ans, n - *it);
        }

        cout << ans << '\n';
    }

    return 0;
}