class Solution {
public:
    int lastRemaining(int n) {
        int a=1,d=1;
        while(n>1){
            if(n%2==0){
                a=a+(n-1)*d;
            }
            else{
                a=a+(n-2)*d;
            }
            d=d*-2;
            n=n/2;
        }
        return a;
    }
};