class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int,int>>A;
        for(int i=0;i<points.size();i++){
            A.push_back({points[i][1],points[i][0]});
        }
        sort(A.begin(),A.end());
        int i=0,cnt=0;
        while(i<A.size()){
            cnt++;
            int j=A[i].first,k=i+1;
            while(k<A.size()&&j>=A[k].second&&j<=A[k].first){
                k++;
            }
            i=k;
        }
        return cnt;
    }
};