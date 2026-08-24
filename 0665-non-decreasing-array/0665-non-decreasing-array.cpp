class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int kl=-1,op=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                kl=i;
                op=i+1;
                break;
            }
        }
        if(op==-1){
            return 1;
        }
        int y=nums[kl];
        nums[kl]=nums[op];
        int fla=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                fla=1;
                break;
            }
        }
        if(fla==0){
            return true;
        }
        nums[kl]=y;
        nums[op]=nums[kl];
        int fl=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                fl=1;
                break;
            }
        }
        if(fl==0){
            return true;
        }
        return 0;
    }
};