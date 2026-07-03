class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,pair<int,int>>>A;
        vector<pair<int,pair<int,int>>>B;
        int s=0;
        for(int i=0;i<costs.size();i++){
            if(costs[i][0]>costs[i][1]){
             s+=costs[i][1];
             B.push_back({costs[i][0]-costs[i][1],{costs[i][1],costs[i][0]}});
            }
            else{
                s+=costs[i][0];
                A.push_back({costs[i][1]-costs[i][0],{costs[i][0],costs[i][1]}});
            }
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        if(A.size()==B.size()){
            return s;
        }
        else if(A.size()>B.size()){
            int op=A.size();
            int i=0;
            int kl=B.size();
            while(op>kl){
                s-=A[i].second.first;
                s+=A[i].second.second;
                i++;
                op--;
                kl++;
            }
            return s;
        }
        else{
              int op=B.size();
            int i=0;
            int kl=A.size();
            while(op>kl){
                s-=B[i].second.first;
                s+=B[i].second.second;
                i++;
                op--;
                kl++;
            }
            return s;
        }
        return s;
    }
};