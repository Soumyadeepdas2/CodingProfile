class Solution {
public:
    int minTime(int n, int s1, int s2) {
        int low = 0;
        int high = min(s1, s2) * n;
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int total = mid / s1 + mid / s2;

            if (total >= n) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};