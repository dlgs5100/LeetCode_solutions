int removeElement(int* nums, int numsSize, int val) {
    if (numsSize == 0)
        return 0;
    int i;
    for (i = 0; i < numsSize; i++) {
        while (*(nums + i) == val) {
            if (i != numsSize - 1) {
                *(nums + i) = *(nums + numsSize - 1);
                numsSize--;
            }
            else {
                numsSize--;
                break;
            }
        }
    }
    return numsSize;
}
