int missingNumber(int* A, int a) {
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    if(A[0]!=0){
        return 0;
    }
    int freq[10004]={0};
    for(i=1;i<a;i++){
        freq[A[i]]++;
    }
    for(i=1;i<10004;i++){
        if(freq[i]==0){
            return i;
        }
    }
    return 0;
    
}