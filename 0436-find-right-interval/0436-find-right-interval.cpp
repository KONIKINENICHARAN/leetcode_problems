class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int,int>>A;
        for(int i=0;i<intervals.size();i++){
            A.push_back({intervals[i][0],i});
        }
        sort(A.begin(),A.end());
        vector<int>B(intervals.size());
        for(int i=0;i<intervals.size();i++){
            auto it=lower_bound(A.begin(),A.end(),make_pair(intervals[i][1],0));
            if(it==A.end()){
                B[i]=-1;
            }
            else{
                B[i]=A[it-A.begin()].second;
            }
        }
        return B;
    }
};