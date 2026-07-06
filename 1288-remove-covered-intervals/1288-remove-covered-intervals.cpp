class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });
        int maxi=INT_MIN;
        int cnt=0;
        for(int i=0;i<intervals.size();i++){
            if(maxi<intervals[i][1]){
                cnt++;
                maxi=intervals[i][1];
            }
        }
       return cnt;
    }
};