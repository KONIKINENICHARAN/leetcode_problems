class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k==1){
            return nums;
        }
       vector<int>A(nums.size(),0);
       for(int i=0;i<A.size()-1;i++){
          if(nums[i+1]-nums[i]!=1){
             A[i]=-1;
          }
       }
       vector<int>pre(nums.size());
       pre[0]=A[0];
       for(int i=1;i<A.size()-1;i++){
          pre[i]=pre[i-1]+A[i];
       }
       vector<int>ans(nums.size()-k+1,-1);
       for(int i=0;i<nums.size()-k+1;i++){
           int z=pre[i+k-2];
           if(i==0){
             if(z==0){
                ans[i]=nums[i+k-1];
             }
           }
           else{
              int y=pre[i-1];
              if(z-y==0){
                ans[i]=nums[i+k-1];
              }
           }
       }
       return ans;
    }
};