#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> rows, cols;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++) {
            if (s[j] == '*') {
                rows.push_back(i + 1);
                cols.push_back(j + 1);
            }
        }
    }

    int answerRow;
    int answerCol;

    
    if (rows[0] == rows[1])
        answerRow = rows[2];
    else if (rows[0] == rows[2])
        answerRow = rows[1];
    else
        answerRow = rows[0];

   
    if (cols[0] == cols[1])
        answerCol = cols[2];
    else if (cols[0] == cols[2])
        answerCol = cols[1];
    else
        answerCol = cols[0];

    cout << answerRow << " " << answerCol << '\n';

    return 0;
}