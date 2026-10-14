class Solution {
public:
    string findRollOut(string& s, vector<int>& roll) {
        int n = s.size();
        vector<int> diff(n + 1, 0);
        for (int x : roll) {
            diff[0]++;
            diff[x]--;
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            count += diff[i];
            s[i] = char('a' + (s[i] - 'a' + count) % 26);
        }

        return s;
    }
};