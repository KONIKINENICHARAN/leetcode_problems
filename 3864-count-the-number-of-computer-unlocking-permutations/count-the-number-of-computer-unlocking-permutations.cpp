class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int cnt=0;
        for(int i=1;i<complexity.size();i++){
            if(complexity[0]>=complexity[i]){
                return 0;
            }
        }
        int a=complexity.size()-1;
        long long q=1;
        while(a>0){
            q=(q*a)%1000000007;
            a--;
        } 
        return q;
    }
};