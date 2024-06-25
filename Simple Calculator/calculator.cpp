#include <iostream>
using namespace std;

int main()
{
    double num1 = 0 ,num2 = 0,result = 0;
    char operation;
    cout << "Enter The First Number: ";
    cin >> num1;
    cout << "\nEnter the second Number: ";
    cin >> num2;
    cout << "Choose Operation (+*/-): ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        result += num1 + num2;
        cout << "Your result is: " << result;
        break;
    case '-':
        result += num1 - num2;
        cout <<  "Your result is: " <<  result;
        break;
    case '*':
        result += num1 * num2;
        cout << "Your result is: " <<  result;
        break;
    case '/':
        if (num2 != 0){
            result += num1 / num2;
            cout << "Your result is: " <<  result;
        }
        else
        {
            cout << "Error, Division by 0.";
        }
        break;
    default:
        cout << "Error, Operation not allowed";
        return 1;
    }
    return 0;
}