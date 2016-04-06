#include <vector>
#include <bitset>
using namespace std;

class Solution {
public:
	vector<int> countBits(int num) {
		vector<int> result(num + 1, 0);
		int index = 0;
		int minPower = 1;
		while(minPower <= num)
		    minPower *= 2;

		minPower /= 2;
		for(index = num; index > 0; index--) {
		    if(result[index] != 0)
		        return result;
		    if(minPower > index)
		        minPower /= 2;
            bitset<32> numBitset(index);
            result[index] = numBitset.count();
		    for(int prev = result[index], tmp = index - minPower, tmpPower = minPower/2; tmp > 0, tmpPower >0; ) {
                if(result[tmp] != 0)
                    break;
                while(tmp < tmpPower) {
                    tmpPower /= 2;
                }
                result[tmp] = --prev;
                tmp -= tmpPower;
                tmpPower /= 2;
		    }
		}
		result[0] = 0;
		return result;
	}
};
