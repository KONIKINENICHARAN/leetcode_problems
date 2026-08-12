class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        unordered_map<long long,int>freq;
        int cnt=INT_MIN;
        while(i<nums.size()){
            freq[nums[i]]++;
            if(freq[nums[i]]>k){
                while(j<=i&&nums[i]!=nums[j]){
                    freq[nums[j]]--;
                    j++;
                }
                freq[nums[j]]--;
                 j++;
            }
            cnt=max(cnt,i-j+1);
            i++;
        }
        return cnt;
    }
};