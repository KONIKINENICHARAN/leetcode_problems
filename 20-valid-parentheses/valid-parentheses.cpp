class Solution {
public:
    bool isValid(string s) {
        if(s[0]==')'||s[0]==']'||s[0]=='}'){
            return 0;
        }
        stack<char>A;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                A.push(s[i]);
                continue;
            }
            if(A.empty()) return 0;
            if(s[i]==')'){
                if(A.top()!='('){
                    return 0;
                }
                if(!A.empty()){
                A.pop();
                }
            }
            if(s[i]==']'){
                if(A.top()!='['){
                    return 0;
                }
                A.pop();
            }
            if(s[i]=='}'){
                if(A.top()!='{'){
                    return 0;
                }
                A.pop();
            }
        }
        if(!A.empty()){
            return 0;
        }
        return 1;
    }
};