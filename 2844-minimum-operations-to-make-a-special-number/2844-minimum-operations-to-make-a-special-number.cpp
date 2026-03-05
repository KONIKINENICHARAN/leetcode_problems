class Solution {
public:
    int minimumOperations(string num) {
        // if(num.size()<=1){
        //     if(num[0]=='0'){
        //         return 0;
        //     }
        //     return 1;
        // }
        int flag=0,fla=0;
        int j=-1,k=-1;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='5'&&flag==0){
                 j=i;
                 flag=1;
            }
            if(num[i]=='0'&&fla==0){
                k=i;
                fla=1;
            }
            if(fla==1&&flag==1){
                break;
            }
        }
        if(j==-1&&k==-1){
            return num.size();
        }
        int cnt=num.size()-j;
        int cntt=num.size()-k;
        if(k==-1){
            cntt=num.size();
        }
        if(j==-1){
            cnt=num.size();
        }
        j=j-1;
        k=k-1;
        flag=0;
        fla=0;
        while(j>=0){
            if(num[j]=='2'||num[j]=='7'){
                flag=1;
                break;
            }
            cnt++;
            j--;
        }
        while(k>=0){
            if(num[k]=='5'||num[k]=='0'){
                fla=1;
                break;
            }
            cntt++;
            k--;
        }
        if(k==-2&&flag==0){
            return num.size();
        }
        return min({cnt-1,cntt-1});
    }
};