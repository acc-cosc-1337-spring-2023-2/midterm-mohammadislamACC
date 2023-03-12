//
#include <iostream>
using namespace std;

bool test_config()
{
    return true;
}

bool is_palindrome(const string &s)
{
    for(int i = 0; i < s.length() / 2; i++) 
    {
        if(s[i] != s[s.length() - 1 - i])
            return false;
    }

    return true;
}