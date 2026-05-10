class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<int>A(nums[nums.size()-1]+1,INT_MAX);
         A[0]=0;
        for(int i=0;i<nums.size();i++){
            if(A[nums[i]]==INT_MAX){
            for(int j=nums[i];j<A.size();j+=nums[i]){
                A[j]=min(A[j],nums[i]);
            }
            }
        }
        long long s=0;
        for(int i=0;i<nums.size();i++){
            s+=A[nums[i]];
        }
        return s;
    }
};