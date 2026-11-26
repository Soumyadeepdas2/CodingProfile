class Solution {
public:
    int reverse(int x) {
        long reverse1 = 0;
        while(x!= 0){
            int digit = x % 10;
            reverse1 = reverse1*10 + digit;
            x = x/10;
            if(reverse1 > INT_MAX || reverse1 < INT_MIN){
                return 0;
            }
        }
        return reverse1;
    }
};