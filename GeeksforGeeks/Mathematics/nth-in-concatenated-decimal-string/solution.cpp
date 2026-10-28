class Solution {
  public:
    char nthCharacter(long long n) {
        long long len = 1;
        long long start = 1;
        long long count = 9;

        while (n > len * count) {
            n -= len * count;
            len++;
            start *= 10;
            count *= 10;
        }

        long long num = start + (n - 1) / len;
        int pos = (n - 1) % len;

        string s = to_string(num);
        return s[pos];
    }
};