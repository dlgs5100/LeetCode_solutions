bool isAnagram(char * s, char * t){
    int len_s = strlen(s), len_t = strlen(t);
    if(len_s != len_t)
        return false;
    int *arr1 = calloc(26,sizeof(int));
    int *arr2 = calloc(26,sizeof(int));
    for(int i=0; i<len_s; i++){
        arr1[s[i]-'a']++;
        arr2[t[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(arr1[i] != arr2[i])
            return false;
    }
    return true;
}
