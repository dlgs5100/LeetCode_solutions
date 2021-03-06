int climbStairs(int n){
    if(n==1)
        return 1;
    int n_2=1, n_1=1, n_cur, i;
    for(i=2; i<=n; i++){
        n_cur = n_2+n_1;
        n_2 = n_1;
        n_1 = n_cur;
    }
    return n_cur;
}
