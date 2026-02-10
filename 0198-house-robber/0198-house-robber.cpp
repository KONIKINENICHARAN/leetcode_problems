class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int maxi=0;
        int k=nums.size()-1;
        vector<int>A(nums.size());
        A[k]=nums[k];
        A[k-1]=max(nums[k-1],nums[k]);
        for(int i=k-2;i>=0;i--){
            A[i]=max(nums[i]+A[i+2],A[i+1]);
        }
        return A[0];
    }
};