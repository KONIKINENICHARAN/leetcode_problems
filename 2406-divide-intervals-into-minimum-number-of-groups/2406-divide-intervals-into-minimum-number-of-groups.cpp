bool cmp(vector<int>&A,vector<int>&B){
    return A[1]<B[1];
}
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        map<int,int>freq;
        int cnt=0;
        freq[intervals[intervals.size()-1][0]]++;
        for(int i=intervals.size()-2;i>=0;i--){
            int k=intervals[i][1];
            int kl=0,fla=1;
              auto ptr = freq.upper_bound(k);
              if(ptr==freq.end()){
                 freq[intervals[i][0]]++;
              }
              else{
                int k=(*ptr).first;
                freq[k]--;
                if(freq[k]==0){
                    freq.erase(k);
                }
                freq[intervals[i][0]]++;
              }
        }
        for(auto it:freq){
            cnt+=it.second;
        }
        return cnt;
    }
};