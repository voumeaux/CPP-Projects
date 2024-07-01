#include <iostream>
using namespace std;
// Gross, not net...
int main ()
{
    double old_annual, old_monthly = 0;
    const double PAY_INCREASE = 0.076;

    cout << "Pay Increase by " << PAY_INCREASE <<" For 6 months \n";
    cout << "\nEnter your current annual salary and press return: ";

    cin >> old_annual;
    old_monthly += old_annual / 12;

    cout << "\nPrevious Annual salary: " << old_annual;
    cout << "\nPrevious Monthly salary:" << old_monthly <<endl;

    double new_annual = 0, new_monthly = 0;

    new_monthly += (old_monthly * PAY_INCREASE) + old_monthly;
    new_annual += (new_monthly * 6) + (old_monthly * 6);

    cout << "\nNew Annual salary: " << new_annual;
    cout << "\nNew Monthly salary: " << new_monthly;

    return 0;
}