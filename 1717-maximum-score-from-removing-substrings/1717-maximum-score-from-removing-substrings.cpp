class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int i=0;
        int maxi=max(x,y);
        int mini=min(x,y);
        int cnt=0;
        string k="";
        if(maxi==x){
            k="ab";
        }
        else{
            k="ba";
        }
        cout<<k;
        while(i<s.size()){
             stack<char>st;
             map<char,int>freq;
            if(s[i]=='a'||s[i]=='b'){
                st.push(s[i]);
                freq[s[i]]++;
                i++;
                while(i<s.size()&&(s[i]=='a'||s[i]=='b')){
                    string kl="";
                    if(!st.empty()){
                        kl+=st.top();
                         kl+=s[i];
                    }
                    if(!st.empty()&&kl==k){
                        cnt+=maxi;
                        char t=st.top();
                        st.pop();
                        freq[t]--;
                        if(freq[t]==0){
                            freq.erase(t);
                        }
                    }
                    else{
                        st.push(s[i]);
                        freq[s[i]]++;
                    }
                    i++;
                }
               int pairs=min(freq['a'],freq['b']);
                cnt+=pairs*mini;
            }
            else{
                i++;
            }
        }
        return cnt;
    }
};