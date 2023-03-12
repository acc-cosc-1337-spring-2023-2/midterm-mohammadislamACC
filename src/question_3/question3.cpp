#include "question3.h"
using namespace std;


bool test_config()
{
    return true;
}

double get_sales_commission(double s)
{
    if (s < 0)

    return (s*0);
    
    else if(s >= 0 && s<= 499)

    return (s*0.05);
        
    else if(s >= 500 && s <= 999)

    return (s*0.06);

    else if (s >= 1000 && s <= 1499)

    return (s*0.07);

    else
        
    return (s*0.08);
}