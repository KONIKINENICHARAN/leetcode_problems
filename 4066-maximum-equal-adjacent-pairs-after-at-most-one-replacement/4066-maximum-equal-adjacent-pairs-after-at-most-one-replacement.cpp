class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int cnt=0;
        map<pair<int,int>,int>freq;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                cnt++;
            }
            else{
                freq[{nums[i],nums[i+1]}]++;
            }
        }
        int maxi=0;
        for(auto it:freq){
            maxi=max(maxi,(freq[{it.first.first,it.first.second}]+freq[{it.first.second,it.first.first}]));
        }
        return cnt+maxi;
    }
};