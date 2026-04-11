class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<vector<int>>A(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            A[nums[i]].push_back(i);
        }
        int mini=INT_MAX;
        for(int i=1;i<A.size();i++){
            if(!A[i].empty()){
          if(A[i].size()>=3){
            for(int j=0;j<A[i].size()-2;j++){
                int op=abs(A[i][j]-A[i][j+1])+abs(A[i][j+1]-A[i][j+2])+abs(A[i][j+2]-A[i][j]);
                mini=min(mini,op);
            }
         }
            }
        }
        if(mini==INT_MAX){
            return -1;
        }
        return mini;
    }
};