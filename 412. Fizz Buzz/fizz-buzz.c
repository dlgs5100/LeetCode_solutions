/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    int i;
    char buf[9] = "";
    char **result = (char**)malloc(sizeof(char*)*n);
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0)
            strcat(buf, "Fizz");
        if (i % 5 == 0)
            strcat(buf, "Buzz");
        if (i % 3 != 0 && i % 5 != 0)
            sprintf(buf, "%d", i);
        result[i-1] = (char*)malloc(sizeof(char)*(strlen(buf) + 1));
        memcpy(result[i - 1], buf, strlen(buf) + 1);
        memset(buf, 0, strlen(buf));
    }
    return result;
}
