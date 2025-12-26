class Solution {
public:
    int bestClosingTime(string customers) {
        int cnt=0,o=0,l=0,mini=INT_MAX,op=0;
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                cnt++;
            }
            else{
                o++;
            }
        }
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                int s=cnt+l;
                if(mini>s){
                    op=i;
                    mini=s;
                }
                cnt--;
            }
            else{
                int s1=cnt+l;
                if(mini>s1){
                    op=i;
                    mini=s1;
                }
                l++;
            }
        }
        if(mini>o){
            op=customers.size();
        }
        return op;
    }
};