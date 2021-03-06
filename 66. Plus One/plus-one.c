/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i, carry = 1;
    int *result = malloc(sizeof(int)*(digitsSize+1));
    for(i=digitsSize-1; i>=0; i--){
        result[i+1] = digits[i]+carry;
        carry = result[i+1]/10;
        result[i+1] %= 10;
    }
    if(carry == 1){
        result[0] = carry;
        *returnSize = digitsSize+1;
        return result;
    }
    *returnSize = digitsSize;
    return result+1;
}
