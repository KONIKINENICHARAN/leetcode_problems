class Solution {
public:
    int smallestValue(int n) {
        int maxi=1e5+9;
        vector<int>A(maxi);
        for(int i=0;i<maxi;i++){
            A[i]=i;
        }
        A[0]=-1;
        A[1]=-1;
        for(int i=2;i<maxi;i++){
            if(A[i]==i){
                for(int j=i+i;j<maxi;j+=i){
                    A[j]=i;
                }
            }
        }
        while(n!=0&&n!=1&&A[n]!=n){
            int s=0;
            int op=n;
            while(op!=0&&op!=1&&A[op]!=op){
                s+=A[op];
                int y=op/A[op];
                op=y;
            }
            s+=A[op];
            if(s==n){
                return n;
            }
            n=s;
        }
        return n;
    }
};