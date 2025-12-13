class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<pair<string,string>>A;
        for(int i=0;i<code.size();i++){
            int flag=1;
            string k=code[i];
            if(k.size()==0){
                continue;
            }
            int cnt=0;
            for(int j=0;j<k.size();j++){
                if(!isalnum(k[j])&&k[j]!='_'){
                    flag=0;
                }
            }
            if(flag==1){
            if(businessLine[i]!="electronics"&&businessLine[i]!="grocery"&&businessLine[i]!="pharmacy"&&businessLine[i]!="restaurant"){
               flag=0;
            }
            if(flag==1){
                string h=businessLine[i];
            if(isActive[i]!=1){
                continue;
            }
            else{
               A.push_back({h,k});
            }
            }
            }
        }
        sort(A.begin(),A.end());
        vector<string>result;
        for(int i=0;i<A.size();i++){
            result.push_back(A[i].second);
        }
        return result;
    }
};