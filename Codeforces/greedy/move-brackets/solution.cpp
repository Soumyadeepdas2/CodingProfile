#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        int balance = 0;
        int ans = 0;

        for (char c : s) {
            if (c == '(') {
                balance++;
            } else {
                balance--;
            }

            if (balance < 0) {
                ans++;
                balance = 0;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}