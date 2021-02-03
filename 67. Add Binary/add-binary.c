/*Binary Adder*/
//https://www.electronics-tutorials.ws/combination/comb_7.html
char * addBinary(char * a, char * b){
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len_c = len_a >= len_b ? len_a+2 : len_b+2;
    char *c = (char *)calloc(len_c, sizeof(char));
    c[--len_c] = '\0';
​
    int i = len_a-1, j = len_b-1, num_a, num_b, sum, carry = 0;
    while(1){
        num_a = i >= 0 ? a[i]-'0' : 0;
        num_b = j >= 0 ? b[j]-'0' : 0;
        // sum = (a xor b) xor carry
        sum = num_a ^ num_b ^ carry;
        // carry = (a and b) or (carry and (a xor b)) 
        carry = (num_a & num_b) | (carry & (num_a ^ num_b));
        if(len_c == 0)
            break;
        c[--len_c] = sum+'0';
        i--,j--;
    }
    if(*c == '1')
        return c;
    else
        return c+1;
}
