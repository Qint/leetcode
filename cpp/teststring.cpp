#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    stringstream ss("012345678901234567890123456789012345678901234567890123456789");
    stringstream t_ss("abcdefghijklmnopqrstuvwxyz");
    string str1(ss.str());
    const char* cstr1 = str1.c_str();
    const char* cstr2 = ss.str().c_str();
    const char* cstr3 = ss.str().c_str();
    const char* cstr4 = ss.str().c_str();
    const char* t_cstr = t_ss.str().c_str();
    cout << "------ The results ----------" << endl \
        << "cstr1:\t" << cstr1 << endl      \
        << "cstr2:\t" << cstr2 << endl      \
        << "cstr3:\t" << cstr3 << endl      \
        << "cstr4:\t" << cstr4 << endl      \
        << "t_cstr:\t" << t_cstr << endl        \
        << "-----------------------------"  << endl;
    return 0;
 }
