void swap(int *a, int *b) {
    if (a != b) {
        *a = *a^*b;
        *b = *a^*b;
        *a = *a^*b;
    }
}
int partition(int *nums, int front, int end) {
    int i = front - 1, pivot = nums[end];
    for (int j = front; j < end; j++) {
        if (nums[j] > pivot) {
            i++;
            swap(&nums[i], &nums[j]);
        }
    }
    swap(&nums[i+1], &nums[end]);
    return i + 1;
}
void quickSort(int *nums, int front, int end) {
    if (front < end) {
        int pivot = partition(nums, front, end);
        quickSort(nums, front, pivot - 1);
        quickSort(nums, pivot + 1, end);
    }
}
int findKthLargest(int* nums, int numsSize, int k) {
    quickSort(nums, 0, numsSize - 1);
    return *(nums+k-1);
}
