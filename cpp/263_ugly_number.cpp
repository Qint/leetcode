class Solution {
public:
    bool isUgly(int num) {
        int tmp = num;

        if(tmp == 0)
            return false;
        while(!(tmp % 5)) {
            tmp /= 5;
        }
        while(!(tmp % 3))
            tmp /= 3;
        while(!(tmp %2))
            tmp /= 2;
        if(tmp == 1)
            return true;
        return false;
    }
};
