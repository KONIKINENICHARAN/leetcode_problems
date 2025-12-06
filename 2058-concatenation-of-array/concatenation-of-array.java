class Solution {
    public int[] getConcatenation(int[] nums) {
         int A[]=new int[2*nums.length];
         int k=0;
         int j=0;
         while(j<2){
            for(int i=0;i<nums.length;i++){
                A[k]=nums[i];
                k++;
            }
            j++;
         }
         return A;
    }

}