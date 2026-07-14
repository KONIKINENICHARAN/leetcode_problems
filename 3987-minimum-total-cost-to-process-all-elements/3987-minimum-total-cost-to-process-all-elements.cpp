class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        s-=k;
        long long ans=(s+k-1)/k;
        long long op=((ans%1000000007)*((ans+1)%1000000007))/2;
        return op%1000000007;
    }
};