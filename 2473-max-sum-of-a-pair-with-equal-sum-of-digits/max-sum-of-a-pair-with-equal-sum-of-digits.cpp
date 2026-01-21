class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<pair<int,int>>A;
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            int s=0;
            while(nums[i]>0){
                s+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
            A.push_back({s,k});
        }
        sort(A.begin(),A.end());
        int i=A.size()-1;
        int maxi=-1;
        while(i>0){
            if(A[i].first==A[i-1].first){
                maxi=max(maxi,A[i].second+A[i-1].second);
            }
            i--;
        }  
         return maxi; 
        }
};