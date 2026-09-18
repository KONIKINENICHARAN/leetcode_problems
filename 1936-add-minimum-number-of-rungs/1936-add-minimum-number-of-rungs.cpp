class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
       long long cnt=0;
       int y=0;
       if(dist==1){
        for(int i=0;i<rungs.size();i++){
            int op=rungs[i]-y-1;
            cnt+=op;
            y=rungs[i];
        }
        return cnt;
       }
       for(int i=0;i<rungs.size();i++){
           int op=rungs[i]-y;
           if(op>dist){
            int kl=op-dist;
              cnt+=(kl+dist-1)/dist;
           }
           y=rungs[i];
       } 
       return cnt;
    }
};