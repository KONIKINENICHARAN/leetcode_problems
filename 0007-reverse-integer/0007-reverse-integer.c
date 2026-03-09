int reverse(int x){
 long long k=(long long) x;
    long long rev=0,i;
    while(k!=0){
        i=k%10;
        rev=rev*10+i;
        k=k/10;
    }
    if(rev>INT_MAX||rev<INT_MIN){
        return 0;
    }
    return rev;
}