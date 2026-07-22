class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        stack<int>A;
        int op=INT_MAX;
         int io=INT_MAX;
         int fla=0;
         int ry=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(fla==0){
            if(A.empty()||A.top()<=nums[i]){
                ry=max(ry,nums[i]);
                A.push(nums[i]);
            }
            else{
                op=nums[i];
                 io=min(io,nums[i]);
                ry=max(ry,nums[i]);
                fla=1;
            }
            }
            else{
             io=min(io,nums[i]);
                ry=max(ry,nums[i]);
            }
        }
        if(fla==0){
            return 0;
        }
        fla=0;
        stack<int>B;
        int kl=-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(fla==0){
            if(B.empty()||B.top()>=nums[i]){
                B.push(nums[i]);
            }
            else{
                kl=nums[i];
                io=min(io,nums[i]);
                ry=max(ry,nums[i]);
                fla=1;
            }
            }
            else{
                io=min(io,nums[i]);
                ry=max(ry,nums[i]);
            }
        }
        while(!A.empty()&&A.top()>op){
            A.pop();
        }
        while(!B.empty()&&B.top()<kl){
            B.pop();
        }
        int u=nums.size()-(A.size()+B.size());
        int o=1;
        while(!A.empty()&&A.top()>io){
            u++;
            A.pop();
        }
        while(!B.empty()&&B.top()<ry){
            u++;
            B.pop();
        }
        return u;
    }
};