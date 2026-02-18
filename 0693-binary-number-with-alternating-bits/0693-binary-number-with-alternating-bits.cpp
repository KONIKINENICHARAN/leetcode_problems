class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>A;
        int k=n;
        while(k>0){
            A.push_back(k%2);
            k=k/2;
        }
        for(int i=0;i<A.size()-1;i++){
            if(A[i]==A[i+1]){
                return 0;
            }
        }
        return 1;
    }
};