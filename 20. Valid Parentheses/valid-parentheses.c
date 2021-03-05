char getHalfParentheses(char c){
    switch(c){
        case ')':
            return '(';
        case ']':
            return '[';
        case '}':
            return '{';
        default:
            return '0';
    }
}
bool isValid(char * s){
    int len_s = strlen(s), i, index_stack=0;
    char *stack = malloc(sizeof(char)*len_s);
    for(i=0; i<len_s; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            stack[index_stack++] = s[i];
        else{
            if(index_stack > 0 && stack[index_stack-1] == getHalfParentheses(s[i]))
                index_stack--;
            else
                return false;
        }
    }
    return index_stack == 0 ? true : false;
}
