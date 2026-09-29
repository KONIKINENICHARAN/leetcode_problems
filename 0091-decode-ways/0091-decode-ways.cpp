class Solution {
public:
int dp[100];
int rec(string &s,int idx,string op){
    if(idx>=s.size()){
        return 1;
    }
    if(s[idx]=='0'){
       return 0;
    }
    int ans=0;
    if(dp[idx]!=-1){
        return dp[idx];
    }
    ans=ans+rec(s,idx+1,op+s[idx]);
    if(idx+1<s.size()){
        int kl=(s[idx]-'0')*10+(s[idx+1]-'0');
        if(kl>=10&&kl<=26){
            ans=ans+rec(s,idx+2,op+s[idx]+s[idx+1]);
        }
    }
    return dp[idx]=ans;
}
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        string op="";
        return rec(s,0,op);
    }
};