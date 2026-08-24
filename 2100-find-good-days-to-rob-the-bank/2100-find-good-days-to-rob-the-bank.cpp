class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        if(security.size()<=2*time){
            return {};
        }
        vector<int>ans;
        if(time==0){
            for(int i=0;i<security.size();i++){
                ans.push_back(i);
            }
            return ans;
        }
        vector<int>pre(security.size(),0);
        for(int i=0;i<security.size()-1;i++){
            if(security[i]>=security[i+1]){
                pre[i]=1;
            }
        }
        vector<int>suf(security.size(),0);
        for(int i=security.size()-1;i>0;i--){
            if(security[i]>=security[i-1]){
                suf[i]=1;
            }
        }
        for(int i=1;i<pre.size();i++){
            pre[i]=pre[i-1]+pre[i];
        }
        for(int i=1;i<suf.size();i++){
            suf[i]=suf[i-1]+suf[i];
        }
        for(int i=time;i<security.size()-time;i++){
            int y=i-time-1;
            int op=pre[i-1];
            int fla=0;
            if(y>=0){
                op=pre[i-1]-pre[y];
            }
            int z=suf[i+time]-suf[i];
            if(op==time&&z==time){
                ans.push_back(i);
            }
        }
        return ans;
    }
};