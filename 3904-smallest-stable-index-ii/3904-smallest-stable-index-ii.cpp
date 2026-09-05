class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>maxi;
        vector<int>mini(nums.size());
        maxi.push_back(nums[0]);
        mini[nums.size()-1]=(nums[nums.size()-1]);
        for(int i=1;i<nums.size();i++){
            int op=max(maxi[i-1],nums[i]);
            maxi.push_back(op);
        }
        int j=0;
        for(int i=nums.size()-2;i>=0;i--){
            mini[i]=min(mini[i+1],nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            int kl=maxi[i]-mini[i];
            if(kl<=k){
                return i;
            }
        }
        return -1;
    }
};