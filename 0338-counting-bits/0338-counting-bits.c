/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int i;
    int *A=(int*)malloc((n+1)*sizeof(int));
     A[0]=0;
   int j=1;
    for(i=1;i<=n;i++){
        int cnt=0;
        int b=i;
        while(b!=0){
            if(b%2==1){
                cnt++;
            }
            b=b/2;
        }
        A[j]=cnt;
        j++;
    }
    *returnSize=n+1;
    return A;
}