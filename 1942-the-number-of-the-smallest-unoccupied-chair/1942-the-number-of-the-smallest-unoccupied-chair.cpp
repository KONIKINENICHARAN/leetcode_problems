class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>>>pq;
        for(int i=0;i<times.size();i++){
            pq.push({{times[i][0],times[i][1]},i});
        }
        priority_queue<int,vector<int>,greater<int>>A;
        for(int i=0;i<10005;i++){
            A.push(i);
        }
        if(pq.top().second==targetFriend){
            return 0;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>B;
        B.push({pq.top().first.second,A.top()});
         A.pop();
         pq.pop();
        while(!pq.empty()){
            int op=pq.top().first.first;
            while(!B.empty()&&B.top().first<=op){
                A.push(B.top().second);
                B.pop();
            }
             if(pq.top().second==targetFriend){
                return A.top();
            }
            B.push({pq.top().first.second,A.top()});
            A.pop();
            pq.pop();
        }
        return -1;
    }
};