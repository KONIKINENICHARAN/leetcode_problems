class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>freq;
        int cnt=0,o=0;
        for(int i=0;i<secret.size();i++){
            freq[secret[i]]++;
        }
        for(int i=0;i<guess.size();i++){
            if(secret[i]==guess[i]){
                freq[secret[i]]--;
                cnt++;
            }
        }
        for(int i=0;i<guess.size();i++){
            if(secret[i]!=guess[i]){
                if(freq[guess[i]]>0){
                o++;
                freq[guess[i]]--;
              }
            }
        }
        string k="";
        k+=to_string(cnt)+"A"+to_string(o)+"B";
        cout<<cnt<<" "<<o<<" ";
        return k;
    }
};