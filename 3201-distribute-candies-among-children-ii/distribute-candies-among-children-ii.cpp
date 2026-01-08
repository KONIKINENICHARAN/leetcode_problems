class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long s=0;
        int i=0;
        while(i<=limit){
            long long kl=n-i;
            if(kl<0||2*limit<kl){
                i++;
                continue;
            }
            if(limit>kl){
                s+=kl+1;
            }
            else{
                long long op=kl-limit;
                s+=limit-op+1;
            }
            i++;
        }
        return s;
    }
};