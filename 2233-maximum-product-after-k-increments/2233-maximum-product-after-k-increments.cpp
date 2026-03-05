class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>A;
        for(int i=0;i<nums.size();i++){
            A.push(nums[i]);
        }
        while(k>0){
            int op=A.top();
            op++;
            A.pop();
            A.push(op);
            k--;
        }
        long long sum=1;
        while(!A.empty()){
            sum=(sum*((long long)A.top()));
            sum=sum%(1000000007);
            A.pop();
        } 
        return sum%(1000000007);
    }
};