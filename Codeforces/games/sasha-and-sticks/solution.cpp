#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long moves = n / k;

    if (moves % 2 == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}