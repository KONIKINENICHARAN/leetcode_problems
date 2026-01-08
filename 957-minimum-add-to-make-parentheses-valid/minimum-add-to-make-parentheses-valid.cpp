class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0,o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            else{
                if(cnt>0)cnt--;
                else o++;
            }
        }
        return cnt+o;
    }
};