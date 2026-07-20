class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        long long ans=abs(sum-goal);
        if(ans%limit==0){
            return ans/limit;
        }
        return (ans/limit)+1;
    }
};