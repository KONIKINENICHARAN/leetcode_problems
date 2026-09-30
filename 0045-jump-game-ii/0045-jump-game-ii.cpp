class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),INT_MAX);
        dp[nums.size()-1]=0;
        for(int i=nums.size()-2;i>=0;i--){
            int op=i+nums[i];
            if(op>=nums.size()-1){
                dp[i]=1;
                continue;
            }
            if(op==i){
                dp[i]=INT_MAX;
                continue;
            }
            int mini=INT_MAX;
            for(int j=i+1;j<=op;j++){
                if(dp[j]!=INT_MAX){
                    mini=min(mini,dp[j]);
                }
            }
            if(mini!=INT_MAX){
               dp[i]=mini+1;
            }
        }
        return dp[0];
    }
};