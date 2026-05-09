class Solution {
public:
    long long smallestNumber(long long num) {
        long long a=abs(num);
        vector<int>A;
        while(a>0){
            A.push_back(a%10);
            a=a/10;
        }
        long long ans=0;
        if(num==0){
            return 0;
        }
        if(num<0){
            sort(A.rbegin(),A.rend());
            for(int i=0;i<A.size();i++){
                ans=ans*10+A[i];
            }
            ans=-ans;
        }
        else{
            sort(A.begin(),A.end());
            int op=0;
            while(op<A.size()&&A[op]==0){
                op++;
            }
            int fla=0;
            for(int k=op;k<A.size();k++){
                ans=ans*10+A[k];
                if(k!=0&&fla==0){
                    int kl=0;
                    while(kl<op){
                        ans=ans*10+A[kl];
                        kl++;
                    }
                }
                fla=1;
            }
        }
        return ans;
    }
};