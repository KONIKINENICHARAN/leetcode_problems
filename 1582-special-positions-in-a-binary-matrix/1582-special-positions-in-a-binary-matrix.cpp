class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>A(mat.size());
        vector<int>B(mat[0].size());
        int cnt=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    A[i]++;
                    B[j]++;
                }
            }
        }
      for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j]==1){
                if(A[i]==1&&B[j]==1){
                    cnt++;
                }
            }
        }
      }
       return cnt;
    }
};