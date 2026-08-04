class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>A;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int op=nums[i]+1;
            while(op<nums[i+1]){
                A.push_back(op);
                op++;
            }
        }
        return A;
    }
};