class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int>A;
        int cntt=0;
        for(int i=0;i<grid.size();i++){
            int cnt=0;
            for(int j=grid.size()-1;j>=0;j--){
                if(grid[i][j]==1){
                    break;
                }
                cnt++;
            }
            A.push_back(cnt);
        }
        int j=A.size()-1;
       for(int i=0;i<A.size()-1;i++){
         if(A[i]>=j){
            j--;
            continue;
         }
        int k=i+1;
        while(k<A.size()&&A[k]<j){
            k++;
        }
        if(k==A.size()){
            return -1;
        }
        else{
            for(int op=k;op>i;op--){
                swap(A[op],A[op-1]);
                cntt++;
            }
            j--;
        }
       }
        return cntt;
    }
};