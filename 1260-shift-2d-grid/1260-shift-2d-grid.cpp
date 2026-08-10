class Solution {
public:
    vector<int> rotate(vector<int>&B){
        vector<int>C;
        C.push_back(B[B.size()-1]);
        for(int i=0;i<B.size()-1;i++){
            C.push_back(B[i]);
        }
        return C;
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        k=k%(grid.size()*grid[0].size());
        if(k==0){
            return grid;
        }
       vector<int>A;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            A.push_back(grid[i][j]);
        }
       }
       while(k--){
         A=rotate(A);
       }
       vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size()));
       int k1=0;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            ans[i][j]=A[k1];
            k1++;
        }
       }
        return ans;
    }
};