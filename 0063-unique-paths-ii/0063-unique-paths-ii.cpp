class Solution {
    int dp[101][101];
    int rec(vector<vector<int>>&grid,int i,int j){
        if(i==grid.size()-1&&j==grid[0].size()-1){
            if(grid[i][j]==1){
                return 0;
            }
            return 1;
        }
        if(grid[i][j]==1){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(i+1<grid.size()){
          ans=ans+rec(grid,i+1,j);
        }
        if(j+1<grid[0].size()){
            ans=ans+rec(grid,i,j+1);
        }
        return dp[i][j]=ans;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        return rec(obstacleGrid,0,0);
    }
};