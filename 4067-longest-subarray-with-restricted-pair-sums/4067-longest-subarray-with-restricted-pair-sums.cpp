class Solution {
public:
    int maxSubarray(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>A;
        for(int i=0;i<nums.size();i++){
            map<int,int>freq;
            freq[nums[i]]++;
            for(int j=i+1;j<nums.size();j++){
                int op=nums[i]+nums[j];
                int kl=abs(nums[i]-nums[j]);
                if(freq.count(op)){
                    A.push({j,i});
                }
                if(freq.count(kl)){
                  if(kl==nums[i]){
                    if(freq[kl]>1){
                        A.push({j,i});
                    }
                  }
                  else{
                    A.push({j,i});
                  }
                }
                freq[nums[j]]++;
            }
        }
        int maxi=INT_MIN;
        //    while(!A.empty()){
        //      cout<<A.top().first<<" "<<A.top().second<<endl;
        //         A.pop();
        //     }
        for(int i=0;i<nums.size();i++){
            while(!A.empty()&&A.top().second<i){
                A.pop();
            }
            int op=nums.size();
           if(!A.empty()){
                op=A.top().first;
           }
           maxi=max(maxi,op-i+1);
        }
        return maxi-1;
    }
};