//returns the max sum and the subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,max=INT_MIN;
        int start=0,ansStart=0,ansEnd=0;
        for(int i=0;i<nums.size();i++){
            if(sum==0) start=i;
            sum+=nums[i];
            if(sum>max) {
                max=sum;
                ansStart=start;
                ansEnd=i;
            }
            if(sum<0) sum=0;
        }
        return max;
    }
};
