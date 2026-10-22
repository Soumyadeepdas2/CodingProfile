#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int q = 0, qa = 0, qaq = 0;

    for (char c : s) {
        if (c == 'Q') {
            q++;
            qaq += qa;
        } 
        else if (c == 'A') {
            qa += q;
        }
    }

    cout << qaq << '\n';

    return 0;
}