class Solution {
public:
    bool check(vector<int>& nums) {
        int lowCount=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) lowCount++;
        }
        if(nums[nums.size()-1]>nums[0]) lowCount++;
        return lowCount<=1;
    }
};