/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int* result = (int*)calloc(digitsSize + 1, sizeof(int));
    *returnSize = digitsSize;
    int i, num, carry = 1;
    for (i = digitsSize - 1; i >= 0; i--) {
        num = *(digits + i) + carry;
        if (num >= 10) {
            num %= 10;
            carry = 1;
        }
        else
            carry = 0;
        *(result + i + 1) = num;
    }
    if (carry == 1) {
        *result = 1;
        (*returnSize)++;
        return result;
    }
    return result + 1;
}
