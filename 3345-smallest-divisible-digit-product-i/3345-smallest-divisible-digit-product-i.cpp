class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            int op=n;
            int o=1;
            while(op>0){
                o=o*(op%10);
                op=op/10;
            }
            if(o%t==0){
                return n;
            }
            n++;
        }
        return -1;
    }
};