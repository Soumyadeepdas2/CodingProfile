#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int n = 1;

    while (true) {
        int lastDigit = (k * n) % 10;

        if (lastDigit == 0 || lastDigit == r) {
            cout << n << endl;
            break;
        }

        n++;
    }

    return 0;
}