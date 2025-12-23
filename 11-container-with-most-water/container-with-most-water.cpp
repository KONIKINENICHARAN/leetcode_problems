class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,maxs=0;
        while(left<right){
            int a= min(height[left],height[right]);
            int sum=a*(right-left);
            if(a==height[left]){
                left++;
            }
            else{
                right--;
            }
            maxs=max(maxs,sum);
        }
        return maxs;
    }
};