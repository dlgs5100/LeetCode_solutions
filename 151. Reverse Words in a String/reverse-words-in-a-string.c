void swap(char *a, char *b) {
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
void reverse(char *s, int start, int end) {
    while (start < end) {
        swap(&s[start], &s[end]);
        start++;
        end--;
    }
}
void strip_extra_spaces(char* str) {
    int i, x;
    for (i = x = 0; str[i]; i++)
        if (!isspace(str[i]) || (i > 0 && !isspace(str[i - 1])))
            str[x++] = str[i];
    str[x] = '\0';
    if(isspace(str[x-1]))
        str[x-1] = '\0';
}
char *reverseWords(char *s) {
    strip_extra_spaces(s);
    int n = strlen(s);
    reverse(s, 0, n - 1);
    int i, startIndex, endIndex;
    for (i = 0; i < n; i++) {
        if (!isspace(s[i])) {
            startIndex = i;
            endIndex = i + 1;
            while (endIndex < n && !isspace(s[endIndex]))
                endIndex++;
            reverse(s, startIndex, endIndex-1);
            i = endIndex;
        }
    }
    return s;
}
