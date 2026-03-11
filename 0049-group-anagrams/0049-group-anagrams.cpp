class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>>freq;
        for(int i=0;i<strs.size();i++){
            string op=strs[i];
            sort(op.begin(),op.end());
            freq[op].push_back(i);
        }
        vector<vector<string>>B;
        for(auto it:freq){
            vector<int>D=it.second;
            vector<string>F;
            for(int j=0;j<D.size();j++){
                F.push_back(strs[D[j]]);
            }
            B.push_back(F);
        }
        return B;
    }
};