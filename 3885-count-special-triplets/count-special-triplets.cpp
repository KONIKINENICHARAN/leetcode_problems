class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,long long>freq;
        long long cnt=0,flag=1;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
         unordered_map<int,long long>fre;
         for(int i=0;i<nums.size()-1;i++){
            freq[nums[i]]--;
           if(fre[nums[i]*2]!=0 and freq[nums[i]*2]!=0){
            cnt+=((fre[nums[i]*2]*freq[nums[i]*2])%1000000007);
            cnt=cnt%1000000007;
           }
           fre[nums[i]]++;
         }
        return cnt;
    }
};