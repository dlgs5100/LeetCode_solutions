/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int i, j;
    *returnSize = numRows;
    *returnColumnSizes = (int *)malloc(sizeof(int)*numRows);
    for(i=0; i<numRows; i++) 
        (*returnColumnSizes)[i] = i + 1;
    
    int **arr = (int**)malloc(sizeof(int*)*numRows);
    for(i=0; i<numRows; i++){
        arr[i] = (int*)malloc(sizeof(int)*(i+1));
        arr[i][0]=1;
        arr[i][i]=1;
        if(i>=2){
            for(j=1; j<i; j++)
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }
    }
    return arr;
}
