uint32_t reverseBits(uint32_t n) {
    int result = 0;
    while(n) {
    	result = result*2 + n % 2;
    	n = n / 2;
    }
    return result;
}