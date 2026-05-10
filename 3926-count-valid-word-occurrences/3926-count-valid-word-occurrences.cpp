class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        vector<int>A;
        map<string,int>freq;
        vector<string>C;
        int i=0;
        string ch = "";
        for(auto str : chunks)ch += str;
        while(i <ch.size()){
            int j=i;
            string s="";
            while(j<ch.size()&&ch[j]=='-'){
                j++;
            }
            while(j<ch.size()&&ch[j]!=' '){
                s+=ch[j];
                j++;
            }
            while(!s.empty()&&s.back()=='-'){
                s.pop_back();
            }
            if(!s.empty()&&s!=""){
                C.push_back(s);
            }
            cout << s << endl;
            i=j+1;
        }
        for(int k=0;k<C.size();k++){
           string op=C[k];
           string kl="";
           int i=0;
           while(i<op.size()){
              if(op[i]=='-'){
                int fla=0;
                while(i<op.size()&&op[i]=='-'){
                    fla++;
                    i++;
                }
                if(fla==1){
                    kl+='-';   
                }
                else{
                    if(!kl.empty()){
                      freq[kl]++;
                        kl="";
                    }
                }
              }
              else{
                kl+=op[i];
                i++;
              }
           }
           if(!kl.empty()){
            freq[kl]++;
           }
        }
        for(int  io=0;io<queries.size();io++){
            A.push_back(freq[queries[io]]);
        }
        return A;
    }
};