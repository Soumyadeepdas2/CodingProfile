class Solution {
public:
    int dominantPairs(vector<int> &arr) {
        int n = arr.size();
        int half = n / 2;
        sort(arr.begin(), arr.begin() + half);
        sort(arr.begin() + half, arr.end());

        int j = half;
        int ans = 0;

        for (int i = 0; i < half; i++) {

            while (j < n && arr[i] >= 5LL * arr[j]) {
                j++;
            }
            ans += j - half;
        }

        return ans;
    }
};