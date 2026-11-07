class Solution {
  public:
    vector<string> generateUsernames(vector<string> arr) {
        unordered_set<string> reserved(arr.begin(), arr.end());
        unordered_set<string> used;
        unordered_map<string, int> mp;
        vector<string> ans;

        for (string s : arr) {
            if (!used.count(s)) {
                ans.push_back(s);
                used.insert(s);
                mp[s] = 1;
            } else {
                int &k = mp[s];

                while (reserved.count(s + to_string(k)) ||
                       used.count(s + to_string(k))) {
                    k++;
                }

                string name = s + to_string(k);
                ans.push_back(name);
                used.insert(name);
                k++;
            }
        }

        return ans;
    }
};