//recursive dp approach
class Solution {
public:
    int f(vector<int> &nums, vector<int> &dp, int idx) {
        if(idx == 0) return nums[0];
        if(idx == 1) return max(nums[0], nums[1]);
        if(dp[idx] != -1) return dp[idx];
        int pick = f(nums, dp, idx - 2) + nums[idx];
        int notPick = f(nums, dp, idx - 1);
        return dp[idx] = max(pick, notPick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        vector<int> dp(n, -1);
        return f(nums, dp, n - 1);
    }
};

// tabulation dp approach
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        }

        return dp[n-1];
    }
};
