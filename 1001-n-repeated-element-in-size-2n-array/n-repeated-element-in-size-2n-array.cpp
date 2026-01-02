class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>A;
        for(int i=0;i<nums.size();i++){
            A[nums[i]]++;
        }
        int k=nums.size()/2;
        for(auto it=A.begin();it!=A.end();it++){
            if(it->second==k){
                return it->first;
            }
        }
        return 0;
    }
};