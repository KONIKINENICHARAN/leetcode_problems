class Solution {
public:
    void gameOfLife(vector<vector<int>>& matrix) {
        int k=matrix.size();
        int l=matrix[0].size();
        int A[k][l];
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                    int cnt=0;
                    if((i+1)<k&&(j-1)>=0){
                        if(matrix[i+1][j-1]==1){
                            cnt++;
                        }
                    }
                    if((i+1)<k&&(j+1)<l){
                        if(matrix[i+1][j+1]==1){
                            cnt++;
                        }
                    }
                    if((i-1)>=0&&(j+1)<l){
                        if(matrix[i-1][j+1]==1){
                            cnt++;
                        }
                    }
                     if((i-1)>=0&&(j-1)>=0){
                        if(matrix[i-1][j-1]==1){
                            cnt++;
                        }
                    }
                    if((i-1)>=0){
                        if(matrix[i-1][j]==1){
                            cnt++;
                        }
                    }
                    if((i+1)<k){
                        if(matrix[i+1][j]==1){
                            cnt++;
                        }
                    }
                    if((j-1)>=0){
                        if(matrix[i][j-1]==1){
                            cnt++;
                        }
                    }
                    if((j+1)<l){
                        if(matrix[i][j+1]==1){
                            cnt++;
                        }
                    }
                    if(matrix[i][j]==1){
                       if(cnt==2||cnt==3){
                         A[i][j]=1;
                      }
                      else{
                        A[i][j]=0;
                      }
                    }
                if(matrix[i][j]==0){
                    if(cnt==3){
                        A[i][j]=1;
                    }
                    else{
                        A[i][j]=0;
                    }
                }
        }
        }
        for(int i=0;i<k;i++){
            for(int j=0;j<l;j++){
                matrix[i][j]=A[i][j];
            }
        }
    }
};