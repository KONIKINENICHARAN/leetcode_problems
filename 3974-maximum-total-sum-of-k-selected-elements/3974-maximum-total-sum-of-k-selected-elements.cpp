class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long ans=0;
        sort(nums.rbegin(),nums.rend());
        int j=0;
        while(j<k){
            long long h=nums[j];
            if(mul>0){
                h=(long long)h*mul;
                mul--;
            }
            ans+=h;
            j++;
        }
        return ans;
    }
};