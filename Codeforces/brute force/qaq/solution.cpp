class Solution {
public:
    int minimumSum(string &s) {
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            int j = n - 1 - i;

            if (s[i] != '?' && s[j] != '?' &&
                s[i] != s[j]) {
                return -1;
            }

            if (s[i] == '?')
                s[i] = s[j];

            if (s[j] == '?')
                s[j] = s[i];
        }
        int mid = (n - 1) / 2;
        int first = -1;

        for (int i = 0; i <= mid; i++) {
            if (s[i] != '?') {
                first = i;
                break;
            }
        }
        if (first == -1) {
            for (int i = 0; i < n; i++)
                s[i] = 'a';
        } else {
            for (int i = 0; i < first; i++)
                s[i] = s[first];

            for (int i = first + 1; i <= mid; i++) {
                if (s[i] == '?')
                    s[i] = s[i - 1];
            }
            for (int i = 0; i <= mid; i++)
                s[n - 1 - i] = s[i];
        }
        int sum = 0;

        for (int i = 1; i < n; i++) {
            sum += abs(s[i] - s[i - 1]);
        }

        return sum;
    }
};