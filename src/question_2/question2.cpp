#include "question2.h"

bool test_config()
{
    return true;
}

int get_fib_sequence(int x)
{
    if(x == 0)  return 0;
    if(x == 1)  return 1;
    if(x == 2)  return 1;

    int n1 = 1, n2 = 1;
    int n3 = 0;

    for(int i = 3; i <= x; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return n3;
}