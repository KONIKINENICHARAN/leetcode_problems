class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        vector<int>A;
        A.push_back(0);
        int sum=0;
        int op=1;
        while(sum<=grades.size()){
            sum+=op;
            op++;
            A.push_back(sum);
        }
        int kl=A.size();
        if(A[kl-1]==(kl*(kl+1))/2){
            return kl-1;
        }
        return kl-2;
    }
};