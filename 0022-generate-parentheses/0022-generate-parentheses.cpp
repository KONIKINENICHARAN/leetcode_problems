class Solution {
public:
void rec(int n,int o_cnt,int z_cnt,vector<string>&A,int idx,string ans){
    if(idx==2*n-1){
        ans+=')';
        A.push_back(ans);
        return;
    }
   
    if(o_cnt<=z_cnt){
        if(o_cnt<n){
            ans+='(';
            rec(n,o_cnt+1,z_cnt,A,idx+1,ans);
            ans.pop_back();
        }
    }
    else{
        if(o_cnt<n){
            ans+='(';
            rec(n,o_cnt+1,z_cnt,A,idx+1,ans);
            ans.pop_back();
        }
        if(z_cnt<n){
            ans+=')';
            rec(n,o_cnt,z_cnt+1,A,idx+1,ans);
            ans.pop_back();
        }
    }
    return;
}
    vector<string> generateParenthesis(int n) {
        vector<string>A;
         string ans="";
        rec(n,0,0,A,0,ans);
        return A;
    }
};