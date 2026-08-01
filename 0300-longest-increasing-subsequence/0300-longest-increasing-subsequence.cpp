class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>A(nums.size(),0);
        for(int i=nums.size()-2;i>=0;i--){
            int j=i+1;
            int maxi=INT_MIN;
            while(j<nums.size()){
                if(nums[j]>nums[i]){
                    maxi=max(maxi,A[j]+1);
                }
                j++;
            }
             if(maxi!=INT_MIN){
                A[i]=maxi;
            }
        }
        for(int i=0;i<A.size();i++){
            cout<<A[i]<<" ";
        }
        int op=*max_element(A.begin(),A.end());
        return op+1;
    }
};