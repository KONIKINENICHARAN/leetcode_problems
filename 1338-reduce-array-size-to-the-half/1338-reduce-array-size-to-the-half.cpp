class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int k=arr.size();
        int op=k/2;
       unordered_map<int,int>freq;
        for(int i=0;i<k;i++){
            freq[arr[i]]++;
        }
        vector<pair<int,int>>A;
        for(auto it:freq){
            A.push_back({it.second,it.first});
        }
        sort(A.begin(),A.end());
        int cnt=0;
        for(int i=A.size()-1;i>=0;i--){
            k=k-A[i].first;
            cnt++;
            if(k<=op){
                break;
            }
             
        }
      return cnt;
    }
};