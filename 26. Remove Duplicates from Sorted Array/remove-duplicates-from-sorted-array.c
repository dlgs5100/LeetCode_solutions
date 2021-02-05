int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0)
        return 0;
    int i, count, non_Duplicate_i = 0;
    for (i = 1; i < numsSize; i++) {
        if (*(nums + non_Duplicate_i) != *(nums + i)) {
            non_Duplicate_i++;
            *(nums + non_Duplicate_i) = *(nums + i);
        }
    }
    return non_Duplicate_i+1;
}
