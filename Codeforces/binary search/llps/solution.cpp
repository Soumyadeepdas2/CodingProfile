#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char mx = *max_element(s.begin(), s.end());

    for (char c : s) {
        if (c == mx)
            cout << c;
    }

    cout << '\n';

    return 0;
}