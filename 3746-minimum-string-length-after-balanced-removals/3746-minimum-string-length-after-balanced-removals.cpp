class Solution {
public:
    int minLengthAfterRemovals(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()&&st.top()=='a'&&s[i]=='b'){
                st.pop();
                continue;
            }
            if(!st.empty()&&st.top()=='b'&&s[i]=='a'){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        return st.size();
    }
};