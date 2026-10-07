class Solution {
public:
    string longestPalindrome(string s) {
        string k="";
        for(int i=0;i<s.size();i++){
            string kl="";
            for(int j=i;j<s.size();j++){
                kl+=s[j];
                if(s[i]==s[j]){
                    string op=kl;
                    reverse(op.begin(),op.end());
                    if(kl==op&&op.size()>k.size()){
                        k=op;
                    }
                }
            }
        }
        return k;
    }
};