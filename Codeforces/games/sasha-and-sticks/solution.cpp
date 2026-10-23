#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26][26] = {};

    for (int i = 0; i + 1 < (int)s.size(); i++) {
        int a = s[i] - 'a';
        int b = s[i + 1] - 'a';
        freq[a][b]++;
    }

    int ans = 0;

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (freq[i][j] >= 2) {
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}