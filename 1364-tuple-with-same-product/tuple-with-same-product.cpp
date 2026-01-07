class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<long long,int>freq;
        long long cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                freq[nums[i]*nums[j]]++;
            }
        }
        for(auto it:freq){
            if(it.second>1){
                cnt+=8*((it.second*(it.second-1))/2);
            //    freq[it.first]--;
            //    cout<<it.second<<" ";
            }
        }
        return cnt;
    }
};