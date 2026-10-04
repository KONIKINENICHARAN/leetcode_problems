class Solution {
public:
int dp[101][101];
int rec(string s,int cnt,int idx,int o){
    if(idx==s.size()){
        if(cnt==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(cnt<0){
        if(o<=0){
            return 0;
        }
        return rec(s,cnt+1,idx,o-1);
    }
    if(dp[idx][cnt]!=-1){
        return dp[idx][cnt];
    }
    if(s[idx]==')'){
        return dp[idx][cnt]=rec(s,cnt-1,idx+1,o);
    }
    if(s[idx]=='('){
       return dp[idx][cnt]=rec(s,cnt+1,idx+1,o);
    }
    if(s[idx]=='*'){
        return dp[idx][cnt]=rec(s,cnt+1,idx+1,o)||rec(s,cnt-1,idx+1,o)
        ||rec(s,cnt,idx+1,o+1);
    }
    return 0;
}
    bool checkValidString(string s) {
        memset(dp,-1,sizeof(dp));
        return rec(s,0,0,0);
    }
};