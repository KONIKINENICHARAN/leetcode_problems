class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        if(nums.size()==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int i=0,j=1,mini=INT_MAX,n=nums.size();
        while(i<n&&j<n){
            while(j<n && k*1LL*nums[i]>=nums[j]){
                j++;
            }
            mini =min(mini,(i+(n-j)));
            i++;
        }
        return mini;
    }
};