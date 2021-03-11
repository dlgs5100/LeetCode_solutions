uint32_t reverseBits(uint32_t n) {
    int i;
    uint32_t result=0;
    for(i=0; i<32; i++){
        result |= (n >> i) & 1;
        if(i!=31)
            result <<= 1;
    }
    return result;
}
