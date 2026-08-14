class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int value:nums){
            ans^=value;
        }
        return ans;
    }
};