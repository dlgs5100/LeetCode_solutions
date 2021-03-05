char * longestCommonPrefix(char ** strs, int strsSize){
    int longestIndex = -1, i;
    char sameChar;
    bool allSame;
    if(strsSize == 0)
        return "";
    while(1){
        if(longestIndex+1 >= strlen(strs[0]))
            break;
        allSame = true;
        sameChar = strs[0][longestIndex+1];
        for(i=1; i<strsSize; i++){
            if(sameChar != strs[i][longestIndex+1]){
                allSame = false;
                break;
            }
        }
        printf("%c\n", sameChar);
        if(allSame)
            longestIndex++;
        else
            break;
    }
    strs[0][longestIndex+1] = '\0';
    return strs[0];
}
