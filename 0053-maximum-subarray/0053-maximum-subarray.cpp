class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
        int maxi=INT_MIN;
        int fla=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                fla=1;
                break;
            }
        }
        if(fla==0){
            return *max_element(nums.begin(),nums.end());
        }
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(s<0){
                s=0;
            }
            maxi=max(maxi,s);
        }
        return maxi;
    }
};