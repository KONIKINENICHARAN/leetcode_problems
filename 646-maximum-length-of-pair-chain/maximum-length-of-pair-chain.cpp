class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<pair<int,int>>A;
        int cnt=1;
        for(int i=0;i<pairs.size();i++){
            A.push_back({pairs[i][0],pairs[i][1]});
        }
        sort(A.begin(),A.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });
        int a=A[0].second;
        for(int i=1;i<A.size();i++){
            if(A[i].first>a){
                cnt++;
                a=A[i].second;
            }
        }
        return cnt;
    }
};