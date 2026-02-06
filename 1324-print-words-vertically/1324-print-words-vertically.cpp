class Solution {
public:
    vector<string> printVertically(string s) {
        stringstream ss(s);
        string str;
        vector<string>A;
        while(ss >> str){
            string jk=str;
            A.push_back(jk);
        }
        int maxi=INT_MIN;
        for(int i=0;i<A.size();i++){
            int k=A[i].size();
            maxi=max(maxi,k);
        }
        for(int i=0;i<A.size();i++){
            string d=A[i];
            int k=A[i].size();
            while(k<maxi){
                d+=' ';
                k++;
            }
            A[i]=d;
            cout<<A[i]<<endl;;
        }
        vector<string>KL;
        for(int i=0;i<maxi;i++){
            string f="";
            for(int j=0;j<A.size();j++){
                f+=A[j][i];
            }
            int k=f.size();
            while(!f.empty()&&f[k-1]==' '){
                f.pop_back();
                k--;
            }
            KL.push_back(f);
        }
        return KL;
    }
};