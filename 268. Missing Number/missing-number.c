int missingNumber(int* nums, int numsSize){
    int i, result = 0;
    for(i=0; i<numsSize; i++){
        result ^= i ^ nums[i];
    }
    return result^numsSize;
}
