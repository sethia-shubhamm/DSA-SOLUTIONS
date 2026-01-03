//Recursion:
class Solution {
public:
    int countSteps(int n){
        if(n==0) return 1;
        if(n==1) return 1;
        int twoStep=countSteps(n-2);
        int oneStep=countSteps(n-1);
        return twoStep+oneStep;

    }
    int climbStairs(int n) {
        return countSteps(n);
    }
};

//Memoization
class Solution {
public:
    int countSteps(int n, vector<int> dp){
        if(n==0) return 1;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=countSteps(n-1,dp)+countSteps(n-2,dp);

    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return countSteps(n,dp);
    }
};

//Tabulation
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0]=1,dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};

//Space Optimized
class Solution {
public:
    int climbStairs(int n) {
        int prev1=1,prev2=1;
        for(int i=2;i<=n;i++){
            int next=prev1+prev2;
            prev2=prev1;
            prev1=next;
        }
        return prev1;
    }
};