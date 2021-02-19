void swap(char *a, char *b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
void reverseString(char* s, int sSize){
    int i;
    for(i=0; i<sSize/2; i++)
        swap(&s[i], &s[sSize-i-1]);
}
