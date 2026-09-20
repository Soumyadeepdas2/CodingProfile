#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long a[n];

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    int target = a[k - 1];

    
    for (int i = k - 1; i < n; i++) {
        if (a[i] != target) {
            cout << -1;
            return 0;
        }
    }

    int answer = 0;

    
    for (int i = 0; i < k - 1; i++) {
        if (a[i] != target) {
            answer = i + 1;
        }
    }

    cout << answer;

    return 0;
}