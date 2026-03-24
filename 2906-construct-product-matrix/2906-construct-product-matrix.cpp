class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int cnt=0;
        vector<long long>a;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                grid[i][j]=grid[i][j]%12345;
                a.push_back(grid[i][j]);
                cnt++;
            }
        }
        vector<long long>prefix(cnt,1);
        vector<long long>suffix(cnt,1);
        prefix[0]=1;
        suffix[cnt-1]=1;
        for(int i=1;i<a.size();i++){
            prefix[i]=(prefix[i-1]*a[i-1])%12345;
        }
        for(int i=cnt-2;i>=0;i--){
            suffix[i]=(suffix[i+1]*a[i+1])%12345;
        }
        vector<vector<int>>ans;
        int k=0,p=0;
        int cntt=0;
          for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0){
                    if(cntt>1){
                        for(int i=0;i<grid.size();i++){
                            vector<int>A;
                            for(int j=0;j<grid[i].size();j++){
                                A.push_back(0);
                            }
                            ans.push_back(A);
                        }
                        return ans;
                    }
                    cntt++;
                    k=i;
                    p=j;
                }
            }
        }
        int op=0;
          for(int i=0;i<grid.size();i++){
            vector<int>A;
            long long pro=1;
            for(int j=0;j<grid[i].size();j++){
                //     if(op==0){
                //         pro=suffix[op];
                //     }
                //    else if(op==cnt-1){
                //         pro=prefix[op];
                //     }
                    
                        pro=(prefix[op]*suffix[op])%12345;
                    
                    op++;
                   A.push_back(pro);
            }
            ans.push_back(A);
        }
        return ans; 
    }
};