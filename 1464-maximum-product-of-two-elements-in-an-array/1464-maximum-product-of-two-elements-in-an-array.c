int maxProduct(int* A, int a) {
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            if(A[j]<A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    int d=A[0]-1;
    int f=A[1]-1;
    return d*f;
}