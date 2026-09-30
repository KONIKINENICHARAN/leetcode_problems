int hammingWeight(int n) {
    int A[34],k=0;
    while(n>0){
        A[k]=n%2;
        k++;
        n=n/2;
    }
    int cnt=0,i;
    for(i=0;i<32;i++){
        if(A[i]==1){
            cnt++;
        }
    }
    return cnt;
}