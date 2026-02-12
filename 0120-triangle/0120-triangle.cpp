class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size()==1){
            return triangle[0][0];
        }
        triangle[1][0]=triangle[1][0]+triangle[0][0];
         triangle[1][1]=triangle[1][1]+triangle[0][0];
        int flag=0;
        for(int i=2;i<triangle.size();i++){
            triangle[i][0]=triangle[i][0]+triangle[i-1][0];
            for(int j=1;j<triangle[i].size()-1;j++){
                triangle[i][j]=triangle[i][j]+min(triangle[i-1][j-1],triangle[i-1][j]);
         }
          triangle[i][i]=triangle[i][i]+triangle[i-1][i-1];
        }
        int mini=INT_MAX;
        int kl=triangle.size()-1;
        for(int i=0;i<triangle[kl].size();i++){
            mini=min(mini,triangle[kl][i]);
        }
        return mini;
    }
};