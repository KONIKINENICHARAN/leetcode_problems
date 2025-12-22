class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0,cnt=0,l=0;
        if(goal==0){
            while(l<nums.size()){
                if(nums[l]==0){
                    while(l<nums.size()&&nums[l]==0){
                        l++;
                        cnt++;
                    }
                    l--;
                }
                l++;
                sum+=(cnt*(cnt+1))/2;
                cnt=0;
            }
            return sum;
        }
        
        int cntt=0,s=0,i=0,j=0,op=0;
        while(i<nums.size()){
            s+=nums[i];
            if(s==goal){
                i++;
                int y=0,yp=0;
                while(i<nums.size()&&nums[i]==0){
                    i++;
                    y++;
                }
                if(nums[j]==1){
                    j++;
                    s--;
                }
                else{
                    while(j<i&&nums[j]==0){
                        yp++;
                        j++;
                    }
                    s--;
                    j++;
                }
                cntt+=(y+1)*(yp+1);
            }
            else{
            i++;
            }
        }
        return cntt;
    }
};