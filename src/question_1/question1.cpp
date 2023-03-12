#include "question1.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

bool test_config()
{
    return true;
}

int roll_die()
{
   srand(time(NULL));
   return rand() % 6 + 1; 
}