class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int sum=0;
        stack<int>A;
        A.push(nums.size()-1);
        j--;
        while(j>=0){
            if(nums[A.top()]<=nums[j]){
                A.push(j);
            }
            j--;
        }
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(A.empty()){
                break;
            }
            if(!A.empty()&&i==A.top()){
                A.pop();
            }
            while(!A.empty()&&nums[i]<=nums[A.top()]){
                 maxi=max(maxi,A.top()-i);
                A.pop();
            }
        }
        return maxi;
    }
};