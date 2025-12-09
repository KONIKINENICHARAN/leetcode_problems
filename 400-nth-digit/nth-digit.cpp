class Solution {
public:
    int findNthDigit(int n) {
        if(n<=9){
            return n;
        }
        vector<long long>A;
        long long x=1;
        for(int i=0;i<10;i++){
            long long a=9*pow(10,x-1);
             a=a*x;
              A.push_back(a);
            x++;
        }
         long long j=n,sum=0;
         int k=0;
        for(int i=0;i<9;i++){
            if(j<=A[i]){
                k=i+1;
                break;
            }
            j=j-A[i];
            sum+=A[i];
        }
        long long h=n-sum;
        long long b=k-1;
        string w="";
        while(b>0){
            w+='9';
            b--;
        }
        long long op=0;
            op+=stoll(w);
        op+=(h+k-1)/k;
        w=to_string(op);
        cout<<w;
        int oi=(h-1)%k;
        return w[oi]-'0';
    }
};