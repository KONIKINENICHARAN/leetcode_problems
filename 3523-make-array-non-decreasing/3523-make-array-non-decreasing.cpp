class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
       int cnt=0;
       int maxi=INT_MIN;
       for(int i=0;i<nums.size();i++){
         if(nums[i]>=maxi){
            maxi=nums[i];
            cnt++;
         }
       }
       return cnt;
    }
};