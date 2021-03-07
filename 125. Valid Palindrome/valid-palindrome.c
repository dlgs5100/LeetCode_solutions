bool isPalindrome(char *s){
    int l=0, r=strlen(s)-1;
    while(l<r){
        while(l<strlen(s) && !isalnum(s[l]))l++;
        while(r>0 && !isalnum(s[r]))r--;
        if(l>=r)
            break;
        if(tolower(s[l++]) != tolower(s[r--]))
            return false;
    }
    return true;
}
