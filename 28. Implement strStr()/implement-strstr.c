int strStr(char * haystack, char * needle){
    int i, j, count;
    if(strlen(needle) == 0)
        return 0;
    for(i=0; i<strlen(haystack); i++){
        count=0;
        if(strlen(needle) > strlen(haystack)-i)
            break;
        for(j=0; j<strlen(needle); j++){
            if(needle[j] == haystack[i+j])
                count++;
            else
                break;
        }
        if(count == strlen(needle))
            return i;
    }
    return -1;
}
