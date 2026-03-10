class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        map<int,int>freq;
        if(s.size()!=t.size()){
            return 0;
        }
        for(int i=0;i<s.size();i++){
             int op=(t[i]-s[i]+26)%26;
            if(s[i]==t[i]){
                continue;
            }
            if(26*freq[op]+op>k){
                return 0;
            }
            freq[op]++;
        }
        return 1;
    }
};