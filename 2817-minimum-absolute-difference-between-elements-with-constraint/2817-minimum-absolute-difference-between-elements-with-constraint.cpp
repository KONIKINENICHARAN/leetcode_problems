class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        set<int>A;
        A.insert(-1e8);
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(i-x<0){
                continue;
            }
            else{
                A.insert(nums[i-x]);
            }
           auto op=A.upper_bound(nums[i]);
           int y=-1e8;
           if(op!=A.end()){
              y=*op;
           }
            op--;
            int x=*op;
            int z=min(abs(nums[i]-y),abs(nums[i]-x));
            mini=min(mini,z);
        }
        return mini;
    }
};