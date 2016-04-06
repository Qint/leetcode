class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        if(numRows == 1)
            return result.assign(s.begin(), s.end());
        int row, index;
        for(row = 0; row < numRows; row++) {
            for(int i = 0, index = 2*i*(numRows-1)+(row); index < s.size(); ) {
                result.push_back(s[index]);
                if(row != 0 && row != (numRows-1)) {
                    int tmp = 2*(i+1)*(numRows-1)-row;
                    if(tmp > 0 && tmp < s.size())
                        result.push_back(s[tmp]);
                }
                i++;
                index = 2*i*(numRows-1)+(row);
            }
        }
        return result;
    }
};
