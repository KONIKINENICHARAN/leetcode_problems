class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
       vector<int>A(nums.size()+1);
       for(int i=0;i<queries.size();i++){
            A[queries[i][0]]++;
            A[queries[i][1]+1]--;
       }
       vector<int>ans(A.size());
       ans[0]=A[0];
       for(int i=1;i<A.size();i++){
           ans[i]=ans[i-1]+A[i];
       }
       for(int i=0;i<nums.size();i++){
           if(ans[i]<nums[i]){
            return 0;
           }
       }
        return 1;
    }
};