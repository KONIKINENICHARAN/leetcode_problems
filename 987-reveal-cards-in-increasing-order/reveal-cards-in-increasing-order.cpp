class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int>A(deck.size());
        queue<int>q;
        for(int i=0;i<deck.size();i++){
            q.push(i);
        }
        for(int i=0;i<deck.size();i++){
            int k=q.front();
            q.pop();
            if(!q.empty()){
            q.push(q.front());
            q.pop();
            }
            A[k]=deck[i];
        }
        return A;
    }
};