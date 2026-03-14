class Solution {
public:
    string getHappyString(int n, int k) {
        int lo=0;
        vector<int>Ak(12);
        Ak[0]=0;
        Ak[1]=3;
        for(int i=2;i<12;i++){
            Ak[i]=Ak[i-1]*2;
        }
        if(Ak[n]<k){
            return "";
        }
        for(int i=1;i<=n;i++){
            lo+=Ak[i];
        }
        int po=lo-Ak[n];
        vector<string>A;
        A.push_back("a");
        A.push_back("b");
        A.push_back("c");
        int i=0;
        int io=0;
        while(i<A.size()&&A.size()<=lo){
            char op;
            char kp;
            string kl=A[i];
            if(kl[kl.size()-1]=='a'){
                op='b';
                kp='c';
            }
            else if(kl[kl.size()-1]=='b'){
                op='a';
                kp='c';
            }
            else{
                op='a';
                kp='b';
            }
            A.push_back(A[i]+op);
            A.push_back(A[i]+kp); 
            cout<<A[i]<<" ";
            i++;
        }
        po=po+k;
        if(po-1>=A.size()){
            return "";
        }
        return A[po-1];
    }
};