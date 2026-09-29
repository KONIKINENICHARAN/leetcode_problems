class Solution {
public:
int dp[31];
int rec(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return rec(n-1)+rec(n-2);
}
    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        return rec(n);
    }
};