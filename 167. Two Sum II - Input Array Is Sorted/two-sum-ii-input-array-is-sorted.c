​
​
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    
    int front=0, end=numbersSize-1;
    while(1)
    {
        while(1)
        {
            if(numbers[front]+numbers[end] < target)
            {
                front++;
            }
            else
            {
                break;
            }
        }
        while(1)
        {
            if(numbers[front]+numbers[end] > target)
            {
                end--;
            }
            else
            {
                break;
            }
        }
        if(numbers[front]+numbers[end] == target || front >= end)
        {
            break;
        }
    }
    *returnSize=2;
    int *result = malloc(sizeof(int)*(*returnSize));
    result[0] = front+1;
    result[1] = end+1;
    
    return result;
}
