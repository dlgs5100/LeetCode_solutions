int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    int *result = malloc(sizeof(int)*2);
    for(i=0; i<numsSize; i++){
        for(j=i+1; j<numsSize; j++){
            if(target-nums[i] == nums[j]){
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
            }
        }
    }
    return result;
}
