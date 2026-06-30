class Solution {
public:
    int numberOfSubstrings(string s) {
     int i=0;
     int j=i;
     int freq[3]={0};
     int cnt=0;
       while(i<s.size()){  
           while(j<s.size()&&(freq[0]==0||freq[1]==0||freq[2]==0)){
                freq[s[j]-'a']++;
                j++;
           }
           if(freq[0]!=0&&freq[1]!=0&&freq[2]!=0){
                freq[s[i]-'a']--;
                cnt+=(s.size()-j+1);      
           }
            i++;
       }
       return cnt;
    }
};