class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int>A;
        long long sum=0;
        for(int i=0;i<gas.size();i++){
            sum+=gas[i]-cost[i];
            A.push_back(gas[i]-cost[i]);
        }
        if(sum<0){
            return -1;
        }
        int i=0;
        int kl=0;
        long long op=0;
        while(i<A.size()){
           op+=A[i];
           if(op<0){
               kl=i+1;
               op=0;
           }
           i++;
        }
        return kl;
    }
};