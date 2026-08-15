class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int cnt=0;
        int a=0,o=0;
        for(int i=0;i<nums.size();i++){
            cnt++;
            a=a^nums[i];
            if(o==0){
               if(nums[i]!=0){
                  o++;
               }
            }
        }
        if(o==0){
            return 0;
        }
        if(a==0){
            return cnt-1;
        }
        return cnt;
    }
};