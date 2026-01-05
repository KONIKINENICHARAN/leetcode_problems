class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size(),b=nums2.size();
        if(a>b){
            if(b*6<a){
                return -1;
            }
        }
        if(a<b){
           if(a*6<b){
                return -1;
            } 
        }
        int s=0,s1=0;
        for(int i=0;i<nums1.size();i++){
            s+=nums1[i];
        }
        for(int i=0;i<nums2.size();i++){
            s1+=nums2[i];
        }
        if(s==s1){
            return 0;
        }
        int cnt=0,fla=0,i=0,j=0;
        while(s>s1){
            if(fla==0){
              sort(nums1.rbegin(),nums1.rend());
              sort(nums2.begin(),nums2.end());  
              fla=1;
            }
            int p=0,k=0;
            if(i<nums1.size()&&nums1[i]!=1){
                p=nums1[i]-1;
            }
            if(j<nums2.size()&&nums2[j]!=6){
                k=6-nums2[j];
            }
            if(p>=k){
                s-=p;
                cnt++;
                i++;
            }
            else{
                s1+=k;
                cnt++;
                j++;
            }
            if(s<=s1){
                return cnt;
            }
        }
         while(s<s1){
            if(fla==0){
              sort(nums2.rbegin(),nums2.rend());
              sort(nums1.begin(),nums1.end());  
              fla=1;
            }
            int p=0,k=0;
            if(i<nums2.size()&&nums2[i]!=1){
                p=nums2[i]-1;
            }
            if(j<nums1.size()&&nums1[j]!=6){
                k=6-nums1[j];
            }
            if(p>=k){
                s1-=p;
                cnt++;
                i++;
            }
            else{
                s+=k;
                cnt++;
                j++;
            }
            if(s1<=s){
                return cnt;
            }
        }
        return -1;
    }
};