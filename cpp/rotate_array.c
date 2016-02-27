/* 思想：将数组翻转一遍，再个分隔成的两个字数组各翻转一遍；
*  注意事项：当右移的位数超过了数组的长度的时候，k %= n取余;
**/

void reverseArray(int* start, int length) {
	int index = 0, temp;
	int end = length / 2;
	for (index = 0; index < end; index++) {
		temp = start[index];
		start[index] = start[length - 1 - index];
		start[length - 1 - index] = temp;
	}
}

void rotate(int nums[], int n, int k) {
	k = k % n;
	reverseArray(nums, n);
	reverseArray(nums, k);
	reverseArray(nums + k, n - k);
}