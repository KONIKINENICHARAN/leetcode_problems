class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>>A;
        vector<string>s;
        s.push_back("Table");
        map<int,map<string,int>>freq;
        map<string,int>fre;
        for(int i=0;i<orders.size();i++){
            int op=stoi(orders[i][1]);
            freq[op][orders[i][2]]++;
            fre[orders[i][2]]++;
        }
        vector<string>op;
        for(auto it:fre){
          string kl=it.first;
          op.push_back(kl);   
        }
        int cnt=0;
        sort(op.begin(),op.end());
        for(int i=0;i<op.size();i++){
            s.push_back(op[i]);
        }
         A.push_back(s);
         for(auto it:freq){
            int y=it.first;
            vector<string>jk(s.size());
            string ui=to_string(y);
            jk[0]=ui;
            for(int i=1;i<jk.size();i++){
                jk[i]='0';
            }
            for(int j=1;j<s.size();j++){
                if(freq[it.first].count(s[j])){
                    jk[j]=to_string(freq[it.first][s[j]]);
                }
            }
            A.push_back(jk);
         }
        return A;
    }
};