class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int op=abs(target[0])+abs(target[1]);
        int kl=INT_MAX;
        for(int i=0;i<ghosts.size();i++){
            kl=min(kl,(abs(ghosts[i][0]-target[0])+abs(ghosts[i][1]-target[1])));
        }
        if(op<kl){
            return 1;
        }
        return 0;
    }
};