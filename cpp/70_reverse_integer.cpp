/* 注意反转后整形数值可能溢出
* INT_MAX表示signed int类型可以达到的最大值 */

class Solution {
public:
    int reverse(int x) {
        if(abs(x) < 10)
            return x;
        int op = 1;
        int result = 0, tmp;
        op = x < 0 ?  -1 : 1;
        tmp = abs(x);
        while(tmp != 0) {
            if(result > (INT_MAX - tmp %10)/10)
                return 0;
            result = result * 10 + tmp % 10;
            tmp /= 10;
        }

        result *= op;
        return result;
    }
};
