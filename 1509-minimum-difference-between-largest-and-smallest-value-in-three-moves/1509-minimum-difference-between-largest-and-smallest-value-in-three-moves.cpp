class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=4){
            return 0;
        }
        int i=0;
        vector<int>A;
        while(i<=3){
            A.push_back(nums[i]);
            i++;
        }
        int op=A.size()-1;
        int j=nums.size()-1;
        int mini=INT_MAX;
        while(op>=0){   
            mini=min(mini,abs(A[op]-nums[j]));
            op--;
            j--;
        }
        return mini;
    }
};