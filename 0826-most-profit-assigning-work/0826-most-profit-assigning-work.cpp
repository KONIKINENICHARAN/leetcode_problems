class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        map<int,int>freq;
        vector<pair<int,int>>A;
        for(int i=0;i<difficulty.size();i++){
           freq[difficulty[i]]=max(freq[difficulty[i]],profit[i]);
        }
        for(auto it:freq){
            A.push_back({it.first,it.second});
        }
        sort(A.begin(),A.end());
        sort(worker.begin(),worker.end());
        int i=0,j=0;
        int sum=0,kl=0;
        while(i<worker.size()){
            while(j<A.size()&&A[j].first<=worker[i]){
                int op=A[j].second;
                kl=max(kl,op);
                j++;
            }
            sum+=kl;
            i++;
        }
        return sum;
    }
};