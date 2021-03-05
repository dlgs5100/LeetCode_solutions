int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0)
        return 0;
    int curNum = nums[0], i=0, j;
    for(j=1; j<numsSize; j++){
        if(nums[j] != curNum){
            curNum = nums[j];
            nums[++i] = nums[j];
        }
    }
    return i+1;
}
