class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int cnt=0;
        stack<char>A;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                A.push('(');
            }
            if(s[i]==')'){
                 int op=A.size();
                maxi=max(maxi,op);
                A.pop();
            }
        }
        if(maxi==0){
            return 0;
        }
        return maxi;
    }
};