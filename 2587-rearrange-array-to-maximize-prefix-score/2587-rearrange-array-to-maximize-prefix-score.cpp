class Solution {
public:
    int maxScore(vector<int>& nums) {
        priority_queue<int>A;
        for(int i=0;i<nums.size();i++){
            A.push(nums[i]);
        }
        long long sum=0;
        if(A.top()<=0){
            return 0;
        }
        while(!A.empty()&&A.top()>=0){
            sum+=A.top();
            A.pop();
        }
        long long op=0;
        while(!A.empty()&&(op+abs(A.top()))<sum){
            op+=abs(A.top());
            A.pop();
        }
        return nums.size()-A.size();
    }
};