class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int>a;
        int i=0,j=0,cnt=0;
        while(i<nums.size()&&j<nums.size()){
            cnt=0;
            if(nums[i][j]>1){
            for(int o=2;o<=sqrt(nums[i][j]);o++){
                if(nums[i][j]%o==0){
                    cnt++;
                    break;
                }
            }
            if(cnt==0){
            a.push_back(nums[i][j]);
            }
            }
             i++;
            j++;
        }
        int k=0,l=nums.size()-1;
        while(k<nums.size()){
            if(nums[k][l]>1){
            cnt=0;
            for(int o=2;o<=sqrt(nums[k][l]);o++){
                if(nums[k][l]%o==0){
                    cnt++;
                    break;
                }
            }
            if(cnt==0){
            a.push_back(nums[k][l]);
            }
            }
             k++;
            l--;
        }
        
        if (a.empty()) return 0;
        sort(a.begin(),a.end());
        return a[a.size()-1];
    }
};