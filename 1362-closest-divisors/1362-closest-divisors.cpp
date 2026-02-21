class Solution {
public:
    vector<int> closestDivisors(int num) {
        long long a=num+1;
        long long b=num+2;
        int op=sqrt(a);
        int i=0,j=0;
        while(op>0){
            if(a%op==0){
                i=a/op;
                j=op;
                break;
            }
            op--;
        }
        vector<int>A;
        A.push_back(i);
        A.push_back(j);
        A.push_back(abs(j-i));
        int kl=sqrt(b);
        i=0,j=0;
        while(kl>0){
            if(b%kl==0){
                i=b/kl;
                j=kl;
                break;
            }
            kl--;
        }
        A.push_back(i);
        A.push_back(j);
        A.push_back(abs(j-i));
        if(A[2]<A[5]){
            return {A[0],A[1]};
        }
        return {A[3],A[4]};
    }
};