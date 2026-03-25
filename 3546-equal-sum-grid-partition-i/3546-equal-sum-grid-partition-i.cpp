class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long long>A;
        for(int i=0;i<grid.size();i++){
            long long sum=0;
            for(int j=0;j<grid[i].size();j++){
                sum+=grid[i][j];
            }
            A.push_back(sum);
        }
        int n = grid.size();
        int m = grid[0].size();
        vector<long long>B;
        for(int i=0;i<m;i++){
            long long sum=0;
            for(int j=0;j<n;j++){
                sum+=grid[j][i];
            }
            B.push_back(sum);
        }
        vector<long long>prefix;
        prefix.push_back(A[0]);
        for(int i=1;i<A.size();i++){
            prefix.push_back(prefix[i-1]+A[i]);
        }
        vector<long long>prefix1;
        prefix1.push_back(B[0]);
        for(int i=1;i<B.size();i++){
            prefix1.push_back(prefix1[i-1]+B[i]);
        }
        long long a=prefix[prefix.size()-1];
        long long b=prefix1[prefix1.size()-1];
        for(int i=0;i<prefix.size()-1;i++){
            long long op=a-prefix[i];
            if(prefix[i]==op){
                return 1;
            }
        }
          for(int i=0;i<prefix1.size()-1;i++){
            long long op=b-prefix1[i];
            if(prefix1[i]==op){
                return 1;
            }
        }
        return 0;
    }
};