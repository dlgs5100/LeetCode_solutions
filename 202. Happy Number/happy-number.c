bool isHappy(int n){
    int sum;
    while(1){
        if(n==2)
            return false;
        sum=0;
        while(n){
            sum+=pow(n%10,2);
            n/=10;
        }
        if(sum==1)
            return true; 
        else if(sum==4)
            return false;
        n=sum;
    }
}
