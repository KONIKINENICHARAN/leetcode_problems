class Solution {
public:
    string modifyString(string s) {
        if(s.size()==1){
            if(s[0]!='?'){
                return s;
            }
            s[0]='a';
            return s;
        }
        if(s[0]=='?'){
            char d=s[1];
            if(d!='a'){
              s[0]='a';
            }
            else if(d!='b'){
                s[0]='b';
            }
        }
         if(s[s.size()-1]=='?'){
            char d=s[s.size()-2];
            if(d!='a'){
              s[s.size()-1]='a';
            }
            else if(d!='b'){
                s[s.size()-1]='b';
            }
        }
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='?'){
                char k=s[i-1];
                char gk=s[i+1];
                if(k!='a'&&gk!='a'){
                    s[i]='a';
                }
                else if(k!='b'&&gk!='b'){
                    s[i]='b';
                }
                else{
                    s[i]='c';
                }
            }
        }
        return s;
    }
};