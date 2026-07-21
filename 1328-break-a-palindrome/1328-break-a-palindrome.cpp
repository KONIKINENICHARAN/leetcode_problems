class Solution {
public:
    string breakPalindrome(string s) {
        if(s.size()==1){
            return "";
        }
        if(s.size()==2){
            if(s[0]!='a'){
                s[0]='a';
                return s;
            }
            else{
                s[1]='b';
                return s;
            }
        }
        if(s.size()==3){
            if(s[0]!='a'){
                s[0]='a';
                return s;
            }
            else{
                s[2]='b';
                return s;
            }
        }
        if(s[0]!='a'){
            s[0]='a';
            return s;
        }
        int op=s.size()/2;
        string t="";
        for(int i=0;i<op;i++){
            t+=s[i];
        }
        int j=0;
        while(j<t.size()&&t[j]=='a'){
            j++;
        }
        if(j==t.size()){
            s[s.size()-1]='b';
            return s;
        }
        else{
            s[j]='a';
            return s;
        }
        return "";
    }
};