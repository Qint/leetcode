int canCompleteCircuit(int gas[], int cost[], int n) {
	int current = 0;
	int result = 0;
	int sum = 0;
	unsigned int min = 0xFFFFFFFF;
	for (current = 0; current < n; current++) {
		sum += (gas[current] - cost[current]);
		if (sum < min) {
			min = sum;
			result = current;
		}
	}
	if (sum < 0)
		return -1;
	else
		return (result+1) % n;
}