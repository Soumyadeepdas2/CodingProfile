#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    int n;
    float f;
    int ff;

    getline(cin, s);
    cin >> n;
    cin >> f;

    ff = floor(f);

    cout << s << endl;
    cout << n << endl;
    cout << ff << endl;

    return 0;
}