#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int maxVal = 0, minVal = 101;
    int maxIdx = 0, minIdx = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;

    
        if (x > maxVal) {
            maxVal = x;
            maxIdx = i;
        }

        
        if (x <= minVal) {
            minVal = x;
            minIdx = i;
        }
    }

    int moves = maxIdx + (n - 1 - minIdx);

    if (maxIdx > minIdx)
        moves--;

    cout << moves;

    return 0;
}