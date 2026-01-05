class Solution {
public:
    int numSquares(int n){
        vector<long long>A(101);
        A[0]=0;
        for(int i=1;i<101;i++){
             A[i]=i*i;
        }
        if(n<=3){
            return n;
        }
        int j=0,cnt=0;
        unordered_map<int,int>freq;
        for(int i=1;i<101;i++){
            if(A[i]==n){
                return 1;
            }
            if(A[i]>n){
                break;
            }
            freq[A[i]]++;
            j=i;
        }
        int m=1;
        while(m<=j){
            int x=n-A[m];
            if(freq[x]!=0){
                return 2;
            }
            m++;
        }
         for(int i=1;i<=j;i++){
            for(int k=1;k<=j;k++){
                int x =n- A[i]-A[k];
                if(x<0){
                    break;
                }
                if(freq[x]!=0){
                    return 3;
                }
            }
        }
        return 4;
    }
};