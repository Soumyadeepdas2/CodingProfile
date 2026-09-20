#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int groups = 1;

    // Count groups
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            groups++;
        }
    }

    cout << groups;

    return 0;
}