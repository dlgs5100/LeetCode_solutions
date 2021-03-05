int maxSubArray(int* nums, int numsSize) {
    int max = -pow(10,5), amount = 0, i;
    for(i=0; i<numsSize; i++){
        amount += nums[i];
        if(amount>max)
            max=amount;
        if(amount<0)
            amount=0;
    }
    return max;
}
