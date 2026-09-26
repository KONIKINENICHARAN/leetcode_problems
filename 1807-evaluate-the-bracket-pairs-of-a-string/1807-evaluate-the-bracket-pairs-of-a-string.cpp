class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>fre;
        for(int i=0;i<knowledge.size();i++){
            fre[knowledge[i][0]]=knowledge[i][1];
        }
        int i=0;
        string op="";
        while(i<s.size()){
            if(s[i]!='('){
                string h="";
              while(i<s.size()&&s[i]!='('){
                h+=s[i];
                i++;
              }
              op+=h;
            }
            else{
                i++;
                string h="";
                while(i<s.size()&&s[i]!=')'){
                    h+=s[i];
                    i++;
                }
                if(fre.count(h)){
                    op+=fre[h];
                }
                else{
                    op+="?";
                }
                i++;
            }
        }
        return op;
    }
};