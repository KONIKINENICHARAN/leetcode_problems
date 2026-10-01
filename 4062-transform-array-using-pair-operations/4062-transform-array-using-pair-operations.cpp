class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long s=0;
        long long s1=0;
        for(int i=0;i<source.size();i++){
            s+=source[i]-target[i];
        }
        return s==0;
    }
};