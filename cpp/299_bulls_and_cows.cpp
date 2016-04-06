class Solution {
public:
    string getHint(string secret, string guess) {
        int right = 0, wrong = 0;

        ostringstream result;
        map<char, int> secretmap, wrongmap;
        for(int index = 0; index != secret.size(); index++) {
            if(secretmap.find(secret[index]) == secretmap.end())
                secretmap[secret[index]] = 1;
            else
                secretmap[secret[index]]++;
            if(secret[index] == guess[index]) {
                right++;
                secretmap[secret[index]]--;
            }
        }

        for(string::iterator seindex = secret.begin(), guindex = guess.begin();\
            seindex != secret.end(); seindex++, guindex++) {
            if(*seindex != *guindex && secretmap.find(*guindex) != secretmap.end() && secretmap[*guindex] > 0)
            {
                wrong++;
                secretmap[*guindex]--;

            }

        }
        result<<right<<"A"<<wrong<<"B";
        return result.str();
    }
};
