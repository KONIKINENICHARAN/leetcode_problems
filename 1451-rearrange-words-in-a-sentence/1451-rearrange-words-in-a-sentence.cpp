class Solution {
public:
    string arrangeWords(string text) {
        map<int,vector<string>>freq;
        int i=0;
        while(i<text.size()){
            int cnt=0;
            string y="";
            while(i<text.size()&&text[i]!=' '){
                cnt++;
                y+=tolower(text[i]);
                i++;
            }
            freq[cnt].push_back(y);
            i++;
        }
        string ans="";
        for(auto it:freq){
            for(string i:it.second){
                ans+=i;
                ans+=" ";
            }
        }
        ans.pop_back();
        ans[0]=toupper(ans[0]);
        return ans;
    }
};