class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0){
            return -1;
        }
        if(k==1){
            return 1;
        }
        int n=11;
        int cnt=2;
        while(1){
            int a=n%k;
            if(a==0){
                return cnt;
            }
            a=a*10+1;
            n=a;
            cnt++;
        }
        return 0;
    }
};