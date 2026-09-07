class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        map<int,int>freq;
        for(int i=0;i<rains.size();i++){
            if(rains[i]==0){
               freq[i]++;
            }
        }
        vector<int>ans(rains.size(),-1);
        map<int,int>fre;
        map<int,int>fr;
        for(int i=0;i<rains.size();i++){
            if(rains[i]==0){
                ans[i]=1;
                continue;
            }
            fre[rains[i]]++;
            if(fre[rains[i]]>1){
                int op=fr[rains[i]];
                auto x=freq.upper_bound(op);
                if(x==freq.end()||x->first>=i){
                    return {};
                }
                ans[x->first]=rains[i];
                freq.erase(x);
            }
            fr[rains[i]]=i;
        }
        return ans;
    }
};