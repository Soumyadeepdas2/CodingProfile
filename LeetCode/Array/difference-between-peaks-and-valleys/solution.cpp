class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peaksum = 0, valleysum = 0;
        int n = nums.size();
        for(int i = 1; i<n-1;i++){
            if(nums[i]>nums[i-1]&& nums[i]>nums[i+1]){
                peaksum += nums[i];
                
            }
            else if(nums[i]<nums[i-1]&&nums[i]<nums[i+1]){
                valleysum += nums[i];
            }
        }
        return peaksum - valleysum;
    }
};