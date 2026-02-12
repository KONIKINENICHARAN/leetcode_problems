class Solution {
public:
    int longestBalanced(string s) {
        int mini=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>freq;
            for(int j=i;j<s.size();j++){
               freq[s[j]]++;
               int cnt=0;
               int flag=1;
               int kl=freq[s[i]];
               for(auto it:freq){
                  if(it.second!=kl){
                    flag=0;
                    break;
                  }
                  cnt++;
               }
               if(flag){
               mini=max(mini,cnt*kl);
               }
            }
        }
        return mini;
    }
};