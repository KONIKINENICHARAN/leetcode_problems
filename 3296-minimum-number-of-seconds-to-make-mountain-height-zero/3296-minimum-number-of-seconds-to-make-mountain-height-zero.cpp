class Solution {
public:
    long long minNumberOfSeconds(int n, vector<int>& workerTimes) {
    priority_queue<pair<pair<long long,long long>,int>,vector<pair<pair<long long,long long>,int>>,greater<pair<pair<long long,int>,int>>>A;
        for(int i=0;i<workerTimes.size();i++){
            A.push({{workerTimes[i],workerTimes[i]},1});
        }
        while(n>0){
            auto op=A.top();
            A.pop();
            op.second++;
            op.first.first+=(1ll*op.first.second*op.second);
            A.push(op);
            n--;
        }
        long long maxi=INT_MIN;
        while(!A.empty()){
            auto kl=A.top();
            kl.first.first-=(1ll*kl.first.second*kl.second);
            maxi=max(maxi,kl.first.first);
            A.pop();
        }
        return maxi;
    }
};