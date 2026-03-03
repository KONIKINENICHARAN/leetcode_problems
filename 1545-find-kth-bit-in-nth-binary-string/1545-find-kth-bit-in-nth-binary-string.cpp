class Solution {
public:
    char findKthBit(int n, int k) {
        k--;
        vector<string>A;
        A.push_back("0");
        A.push_back("0");
        int i=2;
        while(i<=20){
          string op=A[i-1];
          string kl=A[i-1]+"1";
          for(int j=0;j<op.size();j++){
             if(op[j]=='1'){
                op[j]='0';
             }
             else{
                op[j]='1';
             }
          }
          reverse(op.begin(),op.end());
          kl+=op;
          A.push_back(kl);
          i++;
        }
        string klo=A[n];
        return klo[k];
    }
};