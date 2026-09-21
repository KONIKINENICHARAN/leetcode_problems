class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        vector<bool>A;
        vector<pair<char,vector<int>>>B;
        map<int,vector<int>>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]].push_back(i);
        }
        for(auto it:freq){
            B.push_back({it.first,it.second});
        }
        for(int i=0;i<queries.size();i++){
            int cnt1=0;
            for(int i1=0;i1<B.size();i1++){
                int cnt=0;
                auto op=lower_bound(B[i1].second.begin(),B[i1].second.end(),queries[i][0]);
                if(op!=B[i1].second.end()){
                    int kl=op-B[i1].second.begin();
                    auto op1=upper_bound(B[i1].second.begin(),B[i1].second.end(),queries[i][1]);
                    int io=kl;
                    io=op1-B[i1].second.begin();
                    cnt+=io-kl;
                    if(cnt%2!=0){
                        cnt1++;
                    }
                }
            }
            if(cnt1/2>queries[i][2]){
                A.push_back(0);
            }
            else{
                A.push_back(1);
            }
        }
        return A;
    }
};