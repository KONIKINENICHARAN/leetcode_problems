class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>A(nums.size(),-1);
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                A[j]=i;
                j++;
            }
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
                if(queries[i]>j){
                    ans.push_back(-1);
                    continue;
                }
            ans.push_back(A[queries[i] - 1]);
        }
        return ans;
    }
};