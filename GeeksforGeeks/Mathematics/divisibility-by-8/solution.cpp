class Solution {
  public:
    bool isDivBy8(string &s) {
        // code here
        int n = s.size();
        int num = 0;
        int js = max(0,n-3);
        for(int i = js; i<n;i++){
            num = num*10+s[i]-'0';
        }
        return num % 8==0;
    }
};