/*
    55 / 3 = 18...1
    3*(2^4)+3*(2^1)+1=55
    2^4+2^1=18
*/
int divide(int dividend, int divisor){
    int32_t sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
    int64_t l_dividend = labs(dividend), l_divisor = labs(divisor);
    int64_t result=0;
    while(l_dividend >= l_divisor){
        int64_t flag=l_divisor, count=1;
        while(l_dividend >= flag<<1){
            flag <<= 1;
            count <<= 1;
        }
        l_dividend -= flag;
        result+=count;
    }
    result *= sign;
    return result > INT_MAX ? INT_MAX : result;
}
