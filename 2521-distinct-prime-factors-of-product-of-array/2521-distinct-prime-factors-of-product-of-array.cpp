class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        vector<int>A(1003,1);
        for(int i=2;i<1003;i++){
            if(A[i]==1){
                A[i]=i;
                for(int j=i+i;j<1003;j+=i){
                    if(A[j]==1){
                        A[j]=i;
                    }
                }
            }
        }
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            int op=nums[i];
            while(op>1){
                freq[A[op]]++;
                op=op/A[op];
            }
        }
        return freq.size();
    }
};