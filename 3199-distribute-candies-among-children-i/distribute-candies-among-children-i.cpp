class Solution {
public:
    int distributeCandies(int n, int limit) {
        int cnt=0,i=0,s=0;
        while(i<=limit){
            int kl=n-i;
            if(kl<0||2*limit<kl){
                i++;
                continue;
            }
            int op=0;
            if(limit>kl){
                s+=kl+1;
            }
            else{
                s+=(2*limit-kl+1);
            }
            i++;
        }
        return s;
    }
};