class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        sort(arr.begin(), arr.end());

        int i = 0, j = 1;
        int n = arr.size();

        while (i < n && j < n) {
            if (i == j) {
                j++;
            }
            else if (arr[j] - arr[i] == x) {
                return true;
            }
            else if (arr[j] - arr[i] < x) {
                j++;
            }
            else {
                i++;
            }
        }

        return false;
    }
};