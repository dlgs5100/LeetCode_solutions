char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0)
        return "";
    char* result = strs[0];
    int i,j;
    for(i=1; i<strsSize; i++){
        j=0;
        while(result[j]&&strs[i][j]&&result[j]==strs[i][j])
            j++;
        result[j]='\0';
    }
    return result;
}
