class Solution {
  public:
    bool checkWithinK(vector<int>& arr, int k) {
        unordered_map<int, int> last;
        for (int i = 0; i < arr.size(); i++) {
            auto it = last.find(arr[i]);
            if (it != last.end() && i - it->second <= k)
                return true;
            last[arr[i]] = i;
        }
        return false;
    }
};