class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int rem=0;
        vector<int>div(word.size());
        string k="";
        string opo="0";
        for(int i=0;i<word.size();i++){
            k=opo+word[i];
            long long op=stoll(k);
            op=op%m;
            if(op==0){
                div[i]=1;
            }
            else{
                div[i]=0;
            }
            opo=to_string(op);
        }
        return div;
    }
};