int fib(int n){
    if(n < 2)
        return n;
    int i, *f = (int*)malloc(sizeof(int)*(n+1));
    *(f) = 0;
    *(f+1) = 1;
    for(i=2; i<=n; i++)
        *(f+i) = *(f+i-1) + *(f+i-2);
    return *(f+n);
}
