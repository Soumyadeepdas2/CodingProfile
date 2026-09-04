class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        long maximus = 0;
        long water = 0;
        while(left<right){
         int length = right - left;
         water  = (min(height[left],height[right]))*length;
         maximus = max(maximus,water);
         if(height[left]<=height[right]){
            left++;
         }else{
            right--;
         }
        }
        return maximus;
    }
};