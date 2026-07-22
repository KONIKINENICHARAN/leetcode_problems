class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
           vector<pair<int,int>>A;
           for(int i=0;i<nums.size();i++){
               A.push_back({nums[i],i});
           } 
           sort(A.begin(),A.end());
           int mini=INT_MAX;
           int maxi=INT_MIN,fla=0;
           for(int i=0;i<A.size();i++){
            if(i!=A[i].second){
                maxi=max(maxi,A[i].second);
                mini=min(mini,A[i].second);
                fla=1;
            }
           }
           if(fla==0){
            return 0;
           }
           return (maxi-mini+1);
    }
};