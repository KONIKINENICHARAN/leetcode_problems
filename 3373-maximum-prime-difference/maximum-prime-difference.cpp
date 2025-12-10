class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int a=*max_element(nums.begin(),nums.end());
        vector<int>A(a+1,1);
        A[0]=0;
        A[1]=0;
        int flag=0,k=0,l=0;
        for(int i=2;i<=sqrt(a);i++){
            if(A[i]){
            for(int j=i+i;j<=a;j+=i){
                A[j]=0;
            }
            }
        }
        for(int i=0;i<nums.size();i++){
            if(A[nums[i]]==1){
            if(flag==0){
                k=i;
                l=i;
                flag=1;
            }
            else{
                l=i;
            }
            }
        }
        return l-k;
    }
};