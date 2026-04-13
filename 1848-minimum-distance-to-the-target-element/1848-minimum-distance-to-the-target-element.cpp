class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        if(nums[start]==target){
            return 0;
        }
        int op=start-1;
        int kl=start+1;
        int mini1=INT_MAX,mini2=INT_MAX;
        while(op>=0){
            if(nums[op]==target){
                 mini1=abs(op-start);
                 break;
            }
            op--;
        }
        while(kl<nums.size()){
            if(nums[kl]==target){
                mini2=abs(kl-start);
                break;
            }
            kl++;
        }
        return min(mini1,mini2);
    }
};