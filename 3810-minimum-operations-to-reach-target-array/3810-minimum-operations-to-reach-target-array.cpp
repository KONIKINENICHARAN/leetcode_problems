class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=target[i]){
                freq[nums[i]]++;
            }
        }
        return freq.size();

    }
};