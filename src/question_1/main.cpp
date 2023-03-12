#include <iostream>
#include "question1.h"
#include "question1.cpp"

using namespace std;

int main()
{

    while(1) 
    {
        cout << "Press 'Y' to roll the dice\n";
        string input;
        cin >> input;

        if(input != "Y")
            break;
        
        else 
        {
            cout << roll_die() << "\n";
        }
    }
    
    return 0;
}