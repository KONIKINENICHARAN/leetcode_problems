bool isHappy(int n) {
    if(n/10==0){
        if(n==1||n==7){
        return true;
        }
        return false;
    }
    int i,s=0;
    while(n>0){
        i=n%10;
        s=s+pow(i,2);
        n=n/10;
    }
    return isHappy(s);
}