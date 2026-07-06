class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int mini=INT_MAX;
        int cnt=0,o=0;
        long long ans=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                o++;
                continue;
            }
            if(nums[i]<0){
                cnt++;
                nums[i]=abs(nums[i]);
                mini=min(mini,nums[i]);
            }
            ans=ans*(1LL*nums[i]);
        }
        if(o==nums.size()){
            return 0;
        }
        if(o==nums.size()-1){
            if(cnt==1){
                return 0;
            }
        }
        if(cnt%2!=0){
            ans=(ans/mini);
        }
        return ans;
    }
};