#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;

        if (freq[a[i]] > 2) {
            cout << "NO\n";
            return 0;
        }
    }

    vector<int> inc, dec;

    for (auto [x, count] : freq) {
        inc.push_back(x);

        if (count == 2) {
            dec.push_back(x);
        }
    }

    reverse(dec.begin(), dec.end());

    cout << "YES\n";

    cout << inc.size() << '\n';
    for (int x : inc) cout << x << ' ';
    cout << '\n';

    cout << dec.size() << '\n';
    for (int x : dec) cout << x << ' ';
    cout << '\n';

    return 0;
}