class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<pair<int,int>>interval;
        for(int i=0;i<intervals.size();i++){
            interval.push_back({intervals[i][0],intervals[i][1]});
        }
        interval.push_back({newInterval[0],newInterval[1]});
        sort(interval.begin(),interval.end(),[](auto &a,auto &b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first<b.first;
        });
            vector<vector<int>>A;
       int i=0;
       while(i<interval.size()-1){
          int j=i+1;
          int op=interval[i].first;
          int kl=interval[i].second;
          while(j<interval.size()&&kl>=interval[j].first){
              kl=max(kl,interval[j].second);
              j++;
          }
            i=j;
          A.push_back({op,kl});
       }
       if(i!=interval.size()){
          A.push_back({interval[i].first,interval[i].second});
       }
        return A;
    }
};