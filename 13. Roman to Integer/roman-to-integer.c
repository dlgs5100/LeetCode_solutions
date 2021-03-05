int getNumber(char c){
    switch(c){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}
int romanToInt(char * s){
    int i, amount = 0;
    int len_s = strlen(s);
    for(i=0; i<len_s; i++){
        if(i+1 < len_s && getNumber(s[i]) < getNumber(s[i+1]))
            amount -= getNumber(s[i]);
        else
            amount += getNumber(s[i]);
    }
    return amount;
}
