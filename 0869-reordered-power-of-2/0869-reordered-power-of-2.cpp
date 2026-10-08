class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        vector<string>t;
        int i=0;
        while(i<31){
            int op=pow(2,i);
            string kl=to_string(op);
            sort(kl.begin(),kl.end());
            t.push_back(kl);
            i++;
        }
        for(int i=0;i<t.size();i++){
            if(s==t[i]){
                return 1;
            }
        }
        return 0;
    }
};