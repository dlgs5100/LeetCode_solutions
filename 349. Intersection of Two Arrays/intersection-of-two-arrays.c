typedef struct hashTable{
    int id;
    UT_hash_handle hh;
}hashTable;
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int i;
    hashTable *table = NULL;
    hashTable *element;
    for(i=0; i<nums1Size; i++){
        HASH_FIND_INT(table, &nums1[i], element);
        if(element)
            continue;
        element = malloc(sizeof(hashTable));
        element->id = nums1[i];
        HASH_ADD_INT(table, id, element);
    }
    *returnSize=0;
    int *result = malloc(sizeof(int)*(*returnSize));
    for(i=0; i<nums2Size; i++){
        HASH_FIND_INT(table, &nums2[i], element);
        if(element){
            result = realloc(result, sizeof(int)*(++(*returnSize)));
            result[(*returnSize)-1] = element->id;
            HASH_DEL(table, element);
            free(element);
        }
    }
    return result;
}
