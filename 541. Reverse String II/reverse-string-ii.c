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
char * reverseStr(char * s, int k) {
    int len_s = strlen(s);
    if (len_s <= k) {
        reverse(s, 0, strlen(s) - 1);
    }
    else {
        int start, end;
        for (start = 0; start < len_s; start += 2 * k) {
            end = start + k - 1 < len_s ? start + k - 1 : len_s - 1;
            reverse(s, start, end);
        }
    }
    return s;
}
