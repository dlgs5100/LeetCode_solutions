struct number_set{
    int val;
    UT_hash_handle hh;
};
bool containsDuplicate(int* nums, int numsSize){
    struct number_set *set = NULL;
    struct number_set *element;
    
    for(int i=0; i<numsSize; i++){
        HASH_FIND_INT(set, &nums[i], element);
        if(element){
            return true;
        }
        element = malloc(sizeof(struct number_set));
        element->val = nums[i];
        HASH_ADD_INT(set, val, element);
    }
    return false;
}
