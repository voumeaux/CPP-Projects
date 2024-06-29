
#include <iostream>
using namespace std;

int main()
{
    int x = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> x;

    while(x >= 1)
    {
        sum = sum + x;
        x--;
    }
    
    cout << "Sum: " << sum;
}
