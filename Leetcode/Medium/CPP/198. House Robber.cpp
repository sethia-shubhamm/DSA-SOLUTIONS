//recursive and memoized
class Solution {
public:
    int fn(vector<int>& nums,vector<int>& dp,int n){
        if(n==0)return nums[0];
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        int pick=nums[n]+fn(nums,dp,n-2);
        int notPick=0+fn(nums,dp,n-1);
        return dp[n]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return fn(nums,dp,nums.size()-1);
    }
};

//tabulated 