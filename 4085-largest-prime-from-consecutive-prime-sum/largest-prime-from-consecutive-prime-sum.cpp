class Solution {
public:
    int largestPrime(int n) {
        if(n<=1){
            return 0;
        }
        int k=2;
        vector<int>A(n+1,1);
        A[0]=0;
        A[1]=1;
        for(int i=2;i<=sqrt(n);i++){
            if(A[i]){
                for(int j=i+i;j<=n;j+=i){
                    A[j]=0;
                }
            }
        }
        vector<int>C;
        for(int i=2;i<=n;i++){
            if(A[i]){
                C.push_back(i);
            }
        }
        int maxi=2,s=2;
        for(int i=1;i<C.size();i++){
            maxi=maxi+C[i];
            if(maxi>n){
                break;
            }
            if(A[maxi]){
                s=maxi;
            }
        }
        return s;
    }
};