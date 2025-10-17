class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0){
            return -1;
        }
        int n=1;
        int cnt=1;
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