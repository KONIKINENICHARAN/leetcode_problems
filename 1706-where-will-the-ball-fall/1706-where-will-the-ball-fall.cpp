class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>ans(grid[0].size(),-1);
        
        for(int j1=0;j1<grid[0].size();j1++){
            int i=0;
            int j=j1;
            while(i<grid.size()){
                if(grid[i][j]==1){
                     if(j+1<grid[0].size()&&grid[i][j+1]==1){
                        i++;
                        j++;
                    }
                    else{
                        break;
                    }
                }
                else{
                   if(j-1>=0&&grid[i][j-1]==-1){
                        i++;
                        j--;
                    }
                    else{
                        break;
                    } 
                }
            }
             if(i==grid.size()){
                ans[j1]=j;
             }
        }
        return ans;
    }
};