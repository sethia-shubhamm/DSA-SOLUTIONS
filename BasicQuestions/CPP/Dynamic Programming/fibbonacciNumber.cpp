//Recursion method:
int fibbo(int n){
    if(n<=1) return n;
    return fibbo(n-1)+fibbo(n-2)
}

//Memoization
int fibbo(int n, int *dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibbo(n-1)+fibbo(n-2)
}

//Tabulation
dp[0]=0,dp[1]=1;
for (int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
}

//Space Optimized
prev1=0,prev2=1;
for(int i=2;i<=n;i++){
    next=prev1-prev2;
    prev1=prev2;
    prev2=next
}