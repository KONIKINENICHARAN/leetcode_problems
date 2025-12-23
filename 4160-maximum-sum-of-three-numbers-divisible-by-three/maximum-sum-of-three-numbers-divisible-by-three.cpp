class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>A;
        vector<int>B;
        vector<int>C;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0){
                A.push_back(nums[i]);
            }
            if(nums[i]%3==1){
                B.push_back(nums[i]);
            }
            if(nums[i]%3==2){
                C.push_back(nums[i]);
            }
        }
        int s=0,s1=0,s2=0,s3=0;
         if(A.size()>=1&&B.size()>=1&&C.size()>=1){
            s3=A[0]+B[0]+C[0];
        }
        if(A.size()>=3){
            for(int i=0;i<3;i++){
                s+=A[i];
            }
        }
         if(B.size()>=3){
            for(int i=0;i<3;i++){
                s1+=B[i];
            }
        }
         if(C.size()>=3){
            for(int i=0;i<3;i++){
                s2+=C[i];
            }
        }
        return max({s,s1,s2,s3});
    }
};