class Solution {
public:
    int minAnagramLength(string s) {
        int n=s.size();
        vector<int>A;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
               int op=n/i;
               if(op==i){
                  A.push_back(op);
               }
               else{
                A.push_back(i);
                A.push_back(op);
               }
            }
        }
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();i++){
            int j=0;
            int fla=1;
            vector<int>B(26,0);
            while(j<A[i]){
                B[s[j]-'a']++;
                j++;
            }
            while(j<n){
                int op=j;
                vector<int>C(26,0);
                while(op<j+A[i]){
                    C[s[op]-'a']++;
                    op++;
                }
                for(int i1=0;i1<C.size();i1++){
                    if(C[i1]!=B[i1]){
                        fla=0;
                        break;
                    }
                }
                if(fla==0){
                    break;
                }
                j=op;
            }
            if(fla==1){
                return A[i];
            }
        }
        return s.size();
    }
};