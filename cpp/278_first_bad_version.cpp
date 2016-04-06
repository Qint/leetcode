// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1)  return 1;
        int head = 0, tail = n;
        int version = (head+tail)/2;

        while(tail - head > 1)
        {
            bool status = isBadVersion(version);
            if(!status && version < n && isBadVersion(version+1)) {
                return version+1;
            }
            if(status) {    // current version is bad
                tail = version;
                //head = version + 1;
            }
            else {      // current version is not bad
                head = version;
                //tail = version - 1;
            }
            version = head + (tail - head)/2;
        }
        return isBadVersion(head) ? head : tail;
    }
};
