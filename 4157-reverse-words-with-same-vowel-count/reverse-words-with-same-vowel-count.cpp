class Solution {
public:
    bool is_vowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    string reverseWords(string s) {
        vector<string>A;
        string k="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                A.push_back(k);
                k="";
            }
            else{
                k+=s[i];
            }
        }
        A.push_back(k);
        k="";
        int cnt=0,i=0;
        k=A[0];
        while(i<k.size()){
            if(is_vowel(k[i])){
                cnt++;
            }
            i++;
        }
        string lo="";
        lo+=A[0];
        lo+=' ';
        for(int oi=1;oi<A.size();oi++){
            string er=A[oi];
            int ko=0,cntt=0;
            while(ko<er.size()){
                if(is_vowel(er[ko])){
                    cntt++;
                }
                ko++;
            }
            if(cnt==cntt){
                reverse(A[oi].begin(),A[oi].end());
                lo+=A[oi];
                lo+=' ';
            }
            else{
                lo+=A[oi];
                lo+=' ';
            }
        }
        lo.pop_back();
       return lo;
    }
};