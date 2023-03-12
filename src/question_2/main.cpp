#include <iostream>
#include "question2.h"
#include "question2.cpp"

using namespace std;

int main()
{

    while(1)
    {
        cout << "Enter a number between 1 and 15 (Enter 0 to exit): ";
        int x; 
        cin >> x;

        if(x == 0)
            break;

        if(x < 0 || x > 15)
        {
            cout << "Out of range\n";
        }
        else
        {
            int result = get_fib_sequence(x);
            cout<< result << "\n";
        }
    }
    
    return 0;
}