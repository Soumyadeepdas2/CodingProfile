class Solution {
public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int n = arr.size();

        unordered_set<long long> squares;

        for (int x : arr) {
            squares.insert(1LL * x * x);
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                long long sum = 1LL * arr[i] * arr[i]
                              + 1LL * arr[j] * arr[j];

                if (squares.find(sum) != squares.end()) {
                    return true;
                }
            }
        }

        return false;
    }
};