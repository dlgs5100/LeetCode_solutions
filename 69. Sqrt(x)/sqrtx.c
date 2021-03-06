int mySqrt(int x){
    long long i = 0, j = x/2+1, mid, sq;
    while(i<=j){
        mid = (i+j)/2;
        sq = mid*mid;
        if(sq == x)
            return mid;
        else if(sq > x)
            j = mid-1;
        else
            i = mid+1;
    }
    return j;
}
