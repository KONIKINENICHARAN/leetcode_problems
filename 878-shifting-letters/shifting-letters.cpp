class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        string k="";
        long long s1=0,sum=0;
        for(int i=s.size()-1;i>=0;i--){
            s1+=shifts[i]%26;
            int o=(s[i]-'a'+s1)%26;
            k+='a'+o;
        }
        reverse(k.begin(),k.end());
        return k;
    }
};