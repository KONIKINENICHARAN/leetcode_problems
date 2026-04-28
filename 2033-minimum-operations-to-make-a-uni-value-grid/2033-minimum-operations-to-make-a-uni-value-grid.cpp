class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>A;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                A.push_back(grid[i][j]);
            }
        }
        sort(A.begin(),A.end());
        int s=0;
        for(int i=0;i<A.size()-1;i++){
            if((A[i+1]-A[i])%x!=0){
                return -1;
            }
        }
        int op=A[A.size()/2];
        for(int i=0;i<A.size();i++){
            s+=(abs(A[i]-op)/x);
        }
        return s;
    }
};