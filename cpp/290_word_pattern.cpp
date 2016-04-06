/* code for solution 1. */

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        string letter;
        int index = 0;
        istringstream istr(str);
        map<char, string> pattenmap;
        map<string, char> remap;
        map<char, string>::iterator patiter;
        map<string, char>::iterator reiter;

        //map<char, string>::value_type
        while(istr>>letter) {
            patiter = pattenmap.find(pattern[index]), reiter = remap.find(letter);
            if(patiter == pattenmap.end() && reiter == remap.end()) {
                pattenmap.insert(map<char, string>::value_type(pattern[index], letter));
                remap.insert(map<string, char>::value_type(letter, pattern[index]));
                index++;
                continue;
            }
            if(patiter != pattenmap.end() && patiter->second != letter)
                return false;
            if(reiter != remap.end() && reiter->second != pattern[index])
                return false;
            index++;
        }
        if(index != pattern.size())
            return false;
        return true;
    }
};

/* code for solution 2.  */
