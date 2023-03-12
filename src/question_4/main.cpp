#include <iostream>
#include "question4.h"
#include "question4.cpp"

using namespace std;

int main()
{

    //cout << is_palindrome("abcba");

    if (is_palindrome("abcba") == true)
        cout<< "TRUE";
    else 
        cout << "FALSE";
    
    return 0;
}