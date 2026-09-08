class Solution {
public:
    int countCommas(int n) {
       int cnt=0;
        int a=n;
        while(a>0){
            cnt++;
            a=a/10;
        }
        if(cnt<=3){
            return 0;
        }
            int op=n-1000+1;
            return op;
    }
};