class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxi=INT_MIN;
        for(int i=0;i<s.size();i++){
            string op="";
            op+=s[i];
            vector<int>A(26,0);
            A[s[i]-'a']++;
            for(int j=i+1;j<s.size();j++){
                A[s[j]-'a']++;
                int fla=0;
                 for(int i1=0;i1<A.size();i1++){
                     if(A[i1]>2){
                        fla=1;
                        break;
                     }
                 }
                 if(fla==1){
                    break;
                 }
                 int l=op.size();
                 maxi=max(maxi,l);
                 op+=s[j];
            }
        }
        return maxi+1;
    }
};