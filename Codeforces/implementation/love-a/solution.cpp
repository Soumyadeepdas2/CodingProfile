#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a = 0;
    for (char c : s) {
        if (c == 'a') {
            a++;
        }
    }

    cout << min((int)s.size(), 2 * a - 1) << '\n';

    return 0;
}