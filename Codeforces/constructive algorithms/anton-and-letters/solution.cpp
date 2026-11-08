#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool vis[26] = {false};
    int ans = 0;

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            if (!vis[c - 'a']) {
                vis[c - 'a'] = true;
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}