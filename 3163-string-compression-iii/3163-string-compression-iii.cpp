class Solution {
public:
    string compressedString(string word) {
        vector<pair<int,char>>A;
        int i=0;
        string op="";
        while(i<word.size()){
            int j=i;
            int cnt=0;
            while(j<word.size()&&word[i]==word[j]&&cnt<9){
                cnt++;
                j++;
            }
           op+=to_string(cnt);
           op+=word[i];
            i=j;
        }
        return op;
    }
};