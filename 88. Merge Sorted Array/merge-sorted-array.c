void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i, leftIndex=m-1, rightIndex=n-1;
    for(i=nums1Size-1; i>=0; i--){
        if(rightIndex < 0 || (leftIndex >= 0 && nums1[leftIndex] >= nums2[rightIndex]))
            nums1[i] = nums1[leftIndex--];
        else
            nums1[i] = nums2[rightIndex--];
    }
}
