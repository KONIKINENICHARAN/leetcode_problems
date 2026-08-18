class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i=0;i<=nums.size()-k;i++){
            map<int,int>fre;
            for(int j=i;j<i+k;j++){
                fre[nums[j]]++;
                if(fre[nums[j]]==1){
                freq[nums[j]]++;
                }
            }
        }
        int maxi=-1;
        for(auto it:freq){
            if(it.second==1){
                maxi=max(maxi,it.first);
            }
        }
        return maxi;
    }
};