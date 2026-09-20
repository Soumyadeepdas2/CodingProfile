#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    count += n / 100;
    n %= 100;

    count += n / 20;
    n %= 20;

    count += n / 10;
    n %= 10;

    count += n / 5;
    n %= 5;

    count += n; // remaining 1-dollar bills

    cout << count << endl;

    return 0;
}