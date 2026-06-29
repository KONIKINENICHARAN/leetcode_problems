class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt=0;
        map<string,int>freq;
        map<string,int>fre;
        for(int i=0;i<patterns.size();i++){
            freq[patterns[i]]++;
        }
        for(int i=0;i<word.size();i++){
            string s="";
            for(int j=i;j<word.size();j++){
                 s+=word[j];
                 fre[s]++;
                 if(fre[s]==1&&freq[s]!=0){
                    cnt+=freq[s];
                 }
            }
        }
        return cnt;
    }
};