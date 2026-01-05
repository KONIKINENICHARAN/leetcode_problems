class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long s=0;
        long long mini=LLONG_MAX,cnt=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[i][j]<0){
                    cnt++;
                }
             matrix[i][j]=abs(matrix[i][j]);
             mini=min(mini,1LL*matrix[i][j]);
             s+=matrix[i][j];
            }
        }
        if(cnt%2!=0){
            s-=(2*mini);
        }
        return s;
    }
};