class Solution {
public:
    string lastNonEmptyString(string s) {
         vector<int>C(26,0);
         int maxi=-1;
         for(int i=0;i<s.size();i++){
            C[s[i]-'a']++;
            maxi=max(maxi,C[s[i]-'a']);
         }
         vector<char>A;
         for(int i=0;i<C.size();i++){
            if(C[i]==maxi){
                A.push_back(i+'a');
            }
         }
         vector<pair<int,char>>B;
         for(int i=0;i<A.size();i++){
            int op=-1;
            char kl;
            for(int j=0;j<s.size();j++){
                if(s[j]==A[i]){
                    op=j;
                    kl=s[j];
                }
            }
            B.push_back({op,kl});
         }
         sort(B.begin(),B.end());
         string ans="";
         for(int i=0;i<B.size();i++){
            ans+=B[i].second;
         }
         return ans;
    }
};