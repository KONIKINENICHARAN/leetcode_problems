class Solution {
public:
    int countPrimes(int n) {
        if(n<=1){
            return 0;
        }
        vector<int>A(n,1);
        int cnt=0;
        for(int i=2;i<=sqrt(n);i++){
            if(A[i]!=0){
                for(int j=i+i;j<n;j+=i){
                    A[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(A[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};