class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<pair<int,int>>A;
        int maxi=INT_MIN;
        for(int i=0;i<towers.size();i++){
            int op=abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1]);
            if(op<=radius){
                maxi=max(maxi,towers[i][2]);
            }
        }
        if(maxi==INT_MIN){
            return {-1,-1};
        }
        for(int i=0;i<towers.size();i++){
            if(towers[i][2]==maxi){
                A.push_back({towers[i][0],towers[i][1]});
            }
        }
        sort(A.begin(),A.end(),[](auto &a,auto &b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first<b.first;
        });
        return {A[0].first,A[0].second};
    }
};