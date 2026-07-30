class Solution {
public:
    int minimumPushes(string word) {
        vector<int>C(26,0);
        for(int i=0;i<word.size();i++){
            C[word[i]-'a']++;
        }
        sort(C.rbegin(),C.rend());
        vector<int>A(10,1);
        int i1=2;
        int s=0;
        for(int i=0;i<C.size();i++){
            if(C[i]==0){
                continue;
            }
            if(i1>9){
                i1=2;
            }
            s+=A[i1]*C[i];
            A[i1]++;
            i1++;
        }
        return s;
    }
};