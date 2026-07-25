class Solution {
public:
    int maxProduct(int n) {
        vector<int>A;
        while(n>0){
            int k=n%10;
            A.push_back(k);
            n=n/10;
        }
        sort(A.begin(),A.end());
        return A[A.size()-1]*A[A.size()-2];
    }
};