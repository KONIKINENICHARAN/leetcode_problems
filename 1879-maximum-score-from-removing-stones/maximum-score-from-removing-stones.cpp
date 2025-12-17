class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int cnt=0;
        vector<int>A;
        A.push_back(a);
        A.push_back(b);
        A.push_back(c);
        sort(A.begin(),A.end());
        int x=A[0]+A[1];
        while(x>A[2]){
            x-=2;
            cnt++;
        }
        return cnt+min(x,A[2]);
    }
};