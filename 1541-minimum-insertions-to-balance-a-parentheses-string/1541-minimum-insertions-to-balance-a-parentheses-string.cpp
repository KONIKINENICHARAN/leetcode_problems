class Solution {
public:
    int minInsertions(string s) {
        int cnt=0,o=0;
        int cnt1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            else{
                if((i+1)<s.size()&&s[i+1]==')'){
                    if(cnt>0){
                        cnt--;
                    }
                    else{
                        o++;
                    }
                    i++;
                }
                else{
                    if(cnt>0){
                        cnt--;
                        o++;
                    }
                    else{
                        o+=2;
                    }
                }
            }
        }
        cout<<o<<endl;
        return cnt*2+o;
    }
};