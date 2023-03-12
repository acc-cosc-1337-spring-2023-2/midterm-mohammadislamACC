#include <iostream>
#include "question3.h"
#include "question3.cpp"

using namespace std;


int main()
{
    int sales;
    cout << "Enter number of sales: \n";
    cin >> sales;

    double value = get_sales_commission(sales);

    cout << "Sales of " << sales << " dollars gets a commission of " << value << " dollars\n";
    

    return 0;
}
    