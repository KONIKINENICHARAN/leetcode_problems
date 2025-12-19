class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long s=0,sum=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int k=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            if(i<k){
                s+=(nums[i]*nums[i]);
            }
            else{
                sum+=(nums[i]*nums[i]);
            }
        }
        return sum-s;
    }
};