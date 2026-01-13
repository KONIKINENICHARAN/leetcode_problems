class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char,int>freq;
        vector<string>A;
        for(int i=0;i<words2.size();i++){
            unordered_map<char,int>A;
            for(int j=0;j<words2[i].size();j++){
               A[words2[i][j]]++; 
            } 
            for(auto it:A){
                if(freq[it.first]<it.second){
                    freq[it.first]=it.second;
                }
            }
        }
        for(int i=0;i<words1.size();i++){
            unordered_map<char,int>fre;
            int cnt=0;
          for(int j=0;j<words1[i].size();j++){
            fre[words1[i][j]]++;
          }
            for(auto it:freq){
              if(fre[it.first]<it.second){
                cnt++;
                break;
              }
           }
           if(cnt==0){
           A.push_back(words1[i]);
           }
        }
        return A;
    }
};