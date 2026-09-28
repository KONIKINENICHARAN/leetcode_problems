class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
        vector<long long>suf_max(nums.size());
        vector<long long>suf_min(nums.size());
        long long maxi=INT_MIN;
        long long mini=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            maxi=max(maxi,1LL*nums[i]);
            mini=min(mini,1LL*nums[i]);
            suf_max[i]=maxi;
            suf_min[i]=mini;
        }
        long long ans=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            long long y=m-1;
            if((i+y)>=nums.size()){
                break;
            }
            long long k=max(1ll*nums[i]*suf_max[i+y],1LL*nums[i]*suf_min[i+y]);
            ans=max(ans,k);
        }
        return ans;
    }
};