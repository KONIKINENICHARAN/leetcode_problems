class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev=0;
        long long i=n;
        while(i>0){
            int j=i%10;
            rev=rev*10+j;
            i=i/10;
        }
        n=rev;
        long long ans=0;
        long long sum=0,cnt=0;
        while(n>0){
            int op=n%10;
            if(op>0){
                ans=ans*10+op;
            }
            sum+=op;
            n=n/10;
        }
        return sum*ans;
    }
};