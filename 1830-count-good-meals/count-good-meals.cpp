class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        if(deliciousness.size()==1){
            return 0;
        }
        int n=deliciousness.size();
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[deliciousness[i]]++;
        }
        long long s = 0;
        const int MOD = 1000000007;
        for(auto it:freq){
            int i=0,x=it.first,y=it.second;
            while(i<=21){
                int j=(int)pow(2,i);
                long long y2=j-x;
                if(freq.find(y2)!=freq.end()){
                    int hj=freq[y2];
                    if(y2==x){
                        s+=((long long)hj*(long long)(hj-1))/2;
                    }
                    else if(y2>x){
                       s+=(long long)hj*y; 
                    }
                    s%=MOD;
                }
                i++;
            }
        }
        return s%1000000007;
    }
};