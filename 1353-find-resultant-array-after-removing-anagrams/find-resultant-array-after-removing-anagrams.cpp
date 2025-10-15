class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>A;
        int i=0,j=1;
        while(j<words.size()){
            string a=words[i];
            string b=words[j];
            if(a.size()!=b.size()){
                A.push_back(words[i]);
                i=j;
                j++;
            }
            else{
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                if(a==b){
                    j++;
                }
                else{
                    A.push_back(words[i]);
                    i=j;
                    j++;
                }
            }
        }
        if(i==j){
        A.push_back(words[words.size()-1]);
        }
        else{
            A.push_back(words[i]);
        }
        return A;
    }
};