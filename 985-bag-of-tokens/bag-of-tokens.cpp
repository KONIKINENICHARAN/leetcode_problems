class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        if(tokens.size()==0){
            return 0;
        }
        if(tokens[0]>power){
            return 0;
        }
        int s=power,cnt=0,i=0;
        while(i<tokens.size()){
            if(s<tokens[i]){
                break;
            }
            else{
                cnt++;
                s-=tokens[i];
            }
            i++;
        }
        int j=tokens.size()-1;
        while(i<j){
            s+=tokens[j];
            j--;
            cnt--;
            while(s>=tokens[i]){
                cnt++;
                s-=tokens[i];
                i++;
            }
        }
        return cnt;
    }
};