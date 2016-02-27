int hammingWeight(uint32_t n) {
	int result = 0;
	for(n) {
		result += n%2;
		n /= 2;
	}
}