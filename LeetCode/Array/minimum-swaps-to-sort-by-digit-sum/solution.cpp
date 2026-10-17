class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<array<int, 3>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i], i});
        }
        sort(arr.begin(), arr.end());

        vector<bool> visited(n, false);
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i] || arr[i][2] == i)
                continue;

            int j = i;
            int cycleSize = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = arr[j][2];
                cycleSize++;
            }

            swaps += cycleSize - 1;
        }

        return swaps;
    }
};