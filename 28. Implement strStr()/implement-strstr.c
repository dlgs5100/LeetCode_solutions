int strStr(char * haystack, char * needle){
    if(strlen(needle)==0)
        return 0;
    int i, j, k, size;
    for(i = 0; i + strlen(needle) <= strlen(haystack); i++){
        size=0;
        for(j = i, k = 0; k < strlen(needle); j++,k++){
            if(haystack[j] == needle[k])
                size++;
            else
                break;
        }
        if(size == strlen(needle))
            return i;
    }
    return -1;
}
