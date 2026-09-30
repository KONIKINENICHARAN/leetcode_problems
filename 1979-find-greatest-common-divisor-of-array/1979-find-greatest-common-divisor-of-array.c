int findGCD(int* A, int a) {
    int min=0,max=A[0];
    int i;
    for(i=0;i<a;i++){
        if(min<A[i]){
            min=A[i];
        }
        if(A[i]<max){
            max=A[i];
        }
    }
    int d;
    for(i=1;i<=min;i++){
        if(max%i==0&&min%i==0){
            d=i;
        }
    }
    return d;
}