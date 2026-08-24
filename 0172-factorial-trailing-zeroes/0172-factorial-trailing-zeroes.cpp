class Solution {
public:
    int trailingZeroes(int n) {
        int a=n;
        if(n<5){
            return 0;
        }
        if(n<25){
            return n/5;
        }
        int cnt=0,p=5;
        while(n/p>0){
            cnt+=n/p;
            p=p*5;
        }
        return cnt;
    }
};