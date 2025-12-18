class Solution {
public:
    int clumsy(int n) {
        vector<int>A;
        if(n<=2){
            return n;
        }
        if(n==3){
            return 6;
        }
        int x=0,flag=0;
        while(n>3){
            x=n;
            n--;
            x=x*n;
            n--;
            x=x/n;
            if(flag==1){
                x=-x;
            }
            n--;
            x=x+n;
            A.push_back(x);
            n--;
            flag=1;
        }
        int s=A[0];
        for(int i=1;i<A.size();i++){
            s=s+A[i];
        }
        if(n!=0&&n<=2){
            s-=n;
        }
        if(n==3){
            s-=6;
        }
        return s;
    }
};