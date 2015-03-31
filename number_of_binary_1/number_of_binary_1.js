var hammingWeight = function(n) {
    int result;
    while(n) {
    	result += n%2;
    	n = parseInt(n/2);
    }
    return result;
};