class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int op=additionalRocks;
        priority_queue<int,vector<int>,greater<int>>A;
        for(int i=0;i<rocks.size();i++){
            A.push(capacity[i]-rocks[i]);
        }
        int cnt=0;
        while(!A.empty()&&A.top()==0){
            A.pop();
            cnt++;
        }
        while(!A.empty()&&op>0){
            if(A.top()>op){
                break;
            }
            else{
                op-=A.top();
                cnt++;
                A.pop();
            }
        }
        return cnt;
    }
};