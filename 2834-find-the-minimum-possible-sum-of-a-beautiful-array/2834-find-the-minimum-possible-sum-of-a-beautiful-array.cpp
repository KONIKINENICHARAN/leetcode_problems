class Solution {
public:
    int minimumPossibleSum(long long n, long long target) {
        long long op=target/2;
        if(op>=n){
            return ((n*(n+1))/2)%1000000007;
        }
        long long sum=(long long)((op)*(op+1))/2;
        n=n-op;
        long long kl=target-1;
        long long jk=(long long)((kl)*(kl+1))/2;
        target+=n-1;
        long long io=(long long)((target)*(target+1))/2;
        return (sum+io-jk)%1000000007;
    }
};