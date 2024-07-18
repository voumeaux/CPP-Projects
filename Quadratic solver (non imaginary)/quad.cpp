#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    int loopp = 1;
    double a, b, c; 
    double root, result_1, result_2; 
    
    do
    {
        cout << "Quadratic Equation Solver" << endl;
        cout << "Enter the coefficients (a, b, c): ";
        cin >> a >> b >> c;

        root = pow(b, 2) - 4 * a * c;

        if (root >= 0)
        {
            result_1 = (-b + sqrt(root)) / (2 * a);
            result_2 = (-b - sqrt(root)) / (2 * a); 

            cout << "Roots are real and distinct." << endl;
            cout << "Root 1 = " << result_1 << endl;
            cout << "Root 2 = " << result_2 << endl;
        }
        else
        {
            cout << "Roots are imaginary." << endl;
        }

        cout << "Would you like to solve another equation? (1 for yes, 0 for no): ";
        cin >> loopp;

    } while (loopp == 1);

    return 0;
}
