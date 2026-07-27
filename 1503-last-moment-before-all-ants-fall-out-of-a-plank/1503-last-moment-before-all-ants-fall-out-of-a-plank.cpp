class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.rbegin(),left.rend());
        sort(right.begin(),right.end());
        if(right.size()==0&&left.size()==0){
            return 0;
        }
        else if(right.size()==0){
            return left[0];
        }
        else if(left.size()==0){
            return (n-right[0]);
        }
        return max(left[0],n-right[0]);
    }
};