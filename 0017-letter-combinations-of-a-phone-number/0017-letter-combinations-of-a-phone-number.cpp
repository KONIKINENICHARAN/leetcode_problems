class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>A;
        char op='a';
        vector<pair<int,string>>B;
        for(int i=2;i<10;i++){
            string k="";
            if(i!=7&&i!=9){
                int cnt=0;
                while(cnt<3){
                  k+=op;
                  op++;
                  cnt++;
                }
            }
            if(i==7||i==9){
                int cnt=0;
                while(cnt<4){
                  k+=op;
                  op++;
                  cnt++;
                }
            }
            B.push_back({i,k});
        }
        if(digits.size()==1){
            int kp=digits[0]-'0';
            string kl=B[kp-2].second;
            for(int i=0;i<kl.size();i++){
                string ipo="";
                ipo+=kl[i];
                A.push_back(ipo);
            }
        }
        if(digits.size()==2){
            int kp=digits[0]-'0';
            int p=digits[1]-'0';
            string kl=B[kp-2].second;
            string lo=B[p-2].second;
            for(int i=0;i<kl.size();i++){
                for(int j=0;j<lo.size();j++){
                    string po="";
                    po+=kl[i];
                    po+=lo[j];
                   A.push_back(po);
                }
            }
        }
        if(digits.size()==3){
            int kp=digits[0]-'0';
            int p=digits[1]-'0';
            int up=digits[2]-'0';
            string kl=B[kp-2].second;
            string lo=B[p-2].second;
            string upo=B[up-2].second;
            for(int i=0;i<kl.size();i++){
                for(int j=0;j<lo.size();j++){
                    for(int ui=0;ui<upo.size();ui++){
                    string po="";
                    po+=kl[i];
                    po+=lo[j];
                    po+=upo[ui];
                    A.push_back(po);
                    }
                }
            }
        }
        if(digits.size()==4){
                 int kp=digits[0]-'0';
            int p=digits[1]-'0';
            int up=digits[2]-'0';
            int y=digits[3]-'0';
            string kl=B[kp-2].second;
            string lo=B[p-2].second;
            string upo=B[up-2].second;
            string yu=B[y-2].second;
            for(int i=0;i<kl.size();i++){
                for(int j=0;j<lo.size();j++){
                    for(int ui=0;ui<upo.size();ui++){
                        for(int oi=0;oi<yu.size();oi++){
                    string po="";
                    po+=kl[i];
                    po+=lo[j];
                    po+=upo[ui];
                    po+=yu[oi];
                    A.push_back(po);
                    }
                    }
                }
            }
        }
        return A;
    }
};