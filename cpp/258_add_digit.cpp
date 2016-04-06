class Solution {
public:
    int addDigits(int num) {

        int tmp, ret;
        if(num < 10)    return num;
        tmp = num;
        ret = (tmp % 10) % 9;
        tmp /= 10;
        tmp %= 9;
        if(tmp == 0)    tmp = 9;
        ret += tmp;
        return ret > 9 ? ret - 9 : ret;
    }
};
