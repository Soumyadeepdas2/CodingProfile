#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int i = 1; i < n; i++){
        for(int j =1; j <=i; j++){
            cout << "* ";
        }
        cout<< endl;
    }
    for(int i = 0; i< n; i++){
        for(int j = i; j<n;j++){
            cout <<"* ";
        }
        cout << endl;
    }

    return 0;
}