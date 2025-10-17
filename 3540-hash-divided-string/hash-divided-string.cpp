class Solution {
public:
    string stringHash(string s, int k) {
        string d="";
        for(int i=0;i<=s.size()-k;i+=k){
            int j=i,s1=0;
            while(j<s.size()&&j<i+k){
                s1+=s[j]-'a';
                j++;
            }
            s1=s1%26;
            char po='a'+s1;
            d+=po;
        }
        return d;
    }
};