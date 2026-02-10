class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int k=grid.size()-1;
        int p=grid[0].size()-1;
        vector<vector<int>>dp(k+1,vector<int>(p+1));
        int sum=0;
        for(int i=p;i>=0;i--){
            sum+=grid[k][i];
            dp[k][i]=sum;
        }
        sum=0;
        for(int i=k;i>=0;i--){
            sum+=grid[i][p];
            dp[i][p]=sum;
        }
        for(int i=k-1;i>=0;i--){
            for(int j=p-1;j>=0;j--){
               dp[i][j]=min((dp[i+1][j]+grid[i][j]),(dp[i][j+1]+grid[i][j]));
            }
        }
        return dp[0][0];
    }
};