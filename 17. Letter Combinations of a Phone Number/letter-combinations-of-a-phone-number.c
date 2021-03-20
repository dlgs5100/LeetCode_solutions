const char table[10][4] = {
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    {'a', 'b', 'c', ' '},
    {'d', 'e', 'f', ' '},
    {'g', 'h', 'i', ' '},
    {'j', 'k', 'l', ' '},
    {'m', 'n', 'o', ' '},
    {'p', 'q', 'r', 's'},
    {'t', 'u', 'v', ' '},
    {'w', 'x', 'y', 'z'},
};
void dfs(char *digits, int level, char *subStr, char **result, int *returnSize){
    if(level == strlen(digits)){
        subStr[level] = '\0';
        result[(++*returnSize)-1] = malloc(sizeof(char)*(strlen(digits)+1));
        strcpy(result[*returnSize-1], subStr);
        return;
    }  
    int i, n=digits[level]-'0';
    for(i=0; i<4; i++){
        if(table[n][i] == ' ')
            break;
        subStr[level] = table[n][i];
        dfs(digits, level+1, subStr, result, returnSize);
    }
    return;
}
char **letterCombinations(char *digits, int *returnSize){
    if (digits == NULL || strlen(digits) == 0){
        *returnSize = 0;
        return NULL;
    }
    printf("123");
    char *subStr = malloc(sizeof(char)*(strlen(digits)+1));
    *returnSize=0;
    char **result = malloc(sizeof(char*)*32678);
    dfs(digits, 0, subStr, result, returnSize);
    return result;
}
