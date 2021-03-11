int countPrimes(int n){
    if(n==0 || n==1)
        return 0;
    int i, times, amount = n-2;
    bool *prime = malloc(sizeof(bool)*n);
    memset(prime, true, n);
    prime[0] = prime[1] = false;
    for(i=2; i*i<n; i++){
        if(!prime[i])
            continue;
        else{
            for(times=2; i*times<n; times++){
                if(prime[i*times]){
                    prime[i*times] = false;
                    amount--;
                }
            }
        }
    }
    return amount;
}
