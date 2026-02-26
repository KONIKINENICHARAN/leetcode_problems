class Solution {
public:
    int numSteps(string s) {
        int cnt=0;
        while(s.size()>1){
            if(s[s.size()-1]=='0'){
                s.pop_back();
            }
            else{
                int carry=1;
                int i=s.size()-1;
                while(i>=0){
                    int op=s[i]-'0'+carry;
                    int u=op%2;
                    s[i]=u+'0';
                    carry=op/2;
                    i--;
                }
                if(carry==1){
                    s='1'+s;
                }
            }
            cout<<s<<endl;
            cnt++;
        }
        return cnt;
    }
};