class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        long long sum=0;
        int n=customers.size();
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }
        long long kl=0;
        int i=0;
        int j=0;
         while(i<minutes){
            if(grumpy[i]==1){
                kl+=customers[i];
            }
            i++;
         }
         long long ans=0;
         ans=max(ans,kl);
            while(i<customers.size()){
                if(grumpy[i]==1){
                    kl+=customers[i];
                }
                if(grumpy[j]==1){
                    kl-=customers[j];
                }
                ans=max(ans,kl);
                i++;
                j++;
            }
        return sum+ans;
    }
};