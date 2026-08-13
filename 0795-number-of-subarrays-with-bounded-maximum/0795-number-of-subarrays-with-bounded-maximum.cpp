class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int i=0;
        int op=0;
        int cnt=0;
        while(i<nums.size()){
            if(nums[i]>right){
                op=i;
                i++;
                continue;
            }
            int j=i;
            vector<int>A;
            while(j<nums.size()&&nums[j]<=right){
                if(nums[j]>=left){
                    A.push_back(j);
                }
                 j++;
            }
            int y=j;
            for(int k=0;k<A.size();k++){
                if(k==0){
                    cnt+=(A[k]-i+1)*(y-A[k]);
                }
                else{
                 cnt+=(A[k]-A[k-1])*(y-A[k]);
                }
            }
            i=j;
        }
        return cnt;
    }
};