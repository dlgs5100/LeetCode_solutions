int titleToNumber(char * columnTitle){
    int i, len = strlen(columnTitle), result=0;
    for(i=0; i<len; i++)
        result += pow(26,len-i-1)*(columnTitle[i]-'A'+1);
    return result;
}
