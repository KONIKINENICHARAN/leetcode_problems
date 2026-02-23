class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<long long>A;
        A.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            A.push_back(A[i-1]+nums[i]);
        }
        int i=A.size()-1;
        while(i>1){
            if(nums[i]<A[i-1]){
                return A[i];
            }
            i--;
        }
        return -1;
    }
};