class Solution {
public:
    int countMonobit(int n) {
        if(n==0){
            return 1;
        }
        if(n<=2){
            return 2;
        }
        int op=2;
        for(int i=4;i<=n;i++){
            if((i&(i-1))==0){
                op++;
            }
        }
        if((n&(n+1))==0){
            op++;
        }
        return op;
    }
};