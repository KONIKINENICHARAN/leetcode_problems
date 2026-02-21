class Solution {
    public int[] numberOfPairs(int[] nums) {
        int A[]=new int[101];
        for(int i=0;i<nums.length;i++){
            A[nums[i]]++;
        }
        int ans[]=new int[2];
        int cnt=0,o=0;
        for(int i=0;i<101;i++){
            cnt+=A[i]/2;
            o+=A[i]%2;
        }
        ans[0]=cnt;
        ans[1]=o;
        return ans;
    }
}