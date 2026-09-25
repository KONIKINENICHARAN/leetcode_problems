class Solution {
public:
    long long minMoves(vector<int>& balance) {
        long long s=0,sum=0;
        long long j=0;
        int fla=0;
        int y=0;
        for(int i=0;i<balance.size();i++){
            if(balance[i]<0){
                fla=1;
                y=i;
                j=(balance[i]);
            }
                sum+=balance[i];
        }
        if(sum<0){
            return -1;
        }
        if(fla==0){
            return 0;
        }
        vector<pair<int,int>>A;
        for(int i=0;i<balance.size();i++){
            if(i==y){
                continue;
            }
            int op=abs(i-y);
            int z=balance.size()-op;
            A.push_back({min(op,z),balance[i]});
        }
        sort(A.begin(),A.end(),[](auto &a,auto &b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first<b.first;
        });
        int i=0;
        while(j<0&&i<A.size()){
            long long op=abs(j);
            if(A[i].second>op){
                s+=op*A[i].first;
                j=0;  
            }
            else{
                s+=1LL*A[i].first*A[i].second;
                j+=A[i].second;
            }
            i++;
        }
        return s;
    }
};