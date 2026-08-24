int singleNumber(int* A, int a) {
    if(a==1){
        int s=A[a-1];
        return s;
    }
    int i=1,m=2;
    int j,k;
    for(k=0;k<a;k++){
        for(j=0;j<a-k-1;j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    if(A[0]!=A[1]){
        int o=A[0];
        return o;
    }
    if(A[a-1]!=A[a-2]){
        int h=A[a-1];
        return h;
    }
    int p;
    while(m<a){
        if(A[i]!=A[m]&&A[i]!=A[m-2]){
            p=A[i];
            return p;
        }
        i++;
        m++;
    }
    return 0;    
}