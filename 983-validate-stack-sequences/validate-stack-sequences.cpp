class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>A;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            A.push(pushed[i]);
            while(j<popped.size()&&!A.empty()&&A.top()==popped[j]){
                A.pop();
                j++;
            }
        }
        if(A.empty()){
            return true;
        }
        return false;
    }
};