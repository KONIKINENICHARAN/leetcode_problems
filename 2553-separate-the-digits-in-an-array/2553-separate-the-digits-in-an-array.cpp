class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>B;
        for(int i=0;i<nums.size();i++){
            vector<int>A;
            int op=nums[i];
            int rev=0;
             while(op>0){
                A.push_back(op%10);
                op=op/10;
            }
            reverse(A.begin(),A.end());
            for(int i=0;i<A.size();i++){
                B.push_back(A[i]);
            }
        }
        return B;
    }
};