class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int y=matrix[0].size(),po=0;
        vector<int>A;
        for(int i=0;i<(matrix.size()+1)/2;i++){
             if(i>matrix.size()-i-1)break;
            if (i>y-i-1)break;
            int j=i,k=i+1;
            while(j<y-i){
                A.push_back(matrix[i][j]);
                j++;
            }
            j--;
            while(k<=matrix.size()-i-1){
                A.push_back(matrix[k][j]);
                k++;
            }
            k--;
            if(k>i){
            for(int h=j-1;h>=i;h--){
                A.push_back(matrix[k][h]);
             }
            }
            int q=k-1;
            if ((y-i-1)>i){
            while(q>i){
                A.push_back(matrix[q][i]);
                q--;
            }
            }
        }
        return A;
    }
};