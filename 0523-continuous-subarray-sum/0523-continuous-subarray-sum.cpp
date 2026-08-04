class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()==1){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]%k;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0&&nums[i+1]==0){
                return 1;
            }
        }
        unordered_map<int,int>freq;
        long long s=0;
        freq[0]++;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                continue;
            }
            s+=nums[i];
            int op=s%k;
            if(freq.count(op)){
                return 1;
            }
            freq[op]++;
        }
        return 0;
    }
};