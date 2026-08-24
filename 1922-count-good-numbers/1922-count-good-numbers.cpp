class Solution {
    const long long mod=1000000007;
    long long power(long long a,long long b){
        long long ans=1;
        while(b>0){
            if(b%2==1){
                ans=ans*a%mod;
            }
            a=a*a%mod;
            b=b/2;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        long long op=(n+1)/2;
        long long kl=(n)/2;
        long long ans1=power(5,op);
        long long ans2=power(4,kl);
        return (ans1*ans2)%1000000007;
    }
};