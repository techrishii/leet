class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0, maxsum=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            cursum+=nums[i];
            maxsum= max(cursum, maxsum);
            if(cursum<0){
                cursum=0;
            }
        }
        return maxsum;
    }
};