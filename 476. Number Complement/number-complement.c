int findComplement(int num){
    size_t mask = ~0;   // 初始化mask為全1
    while(num & mask) mask <<= 1;   // 將mask變成num最高位前的值為0
    return ~num^mask;   // ex: ...111010^111000
}
