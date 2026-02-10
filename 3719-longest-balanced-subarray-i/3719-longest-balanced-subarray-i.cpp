class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            set<int>A,B;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%2==0){
                    A.insert(nums[j]);
                }
                else{
                    B.insert(nums[j]);
                }
                if(A.size()==B.size()){
                    maxi=max(maxi,j-i+1);
                }
            }
        }
        if(maxi==INT_MIN){
            return 0;
        }
        return maxi;
    }
};