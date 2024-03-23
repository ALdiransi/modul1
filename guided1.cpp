#include <iostream>
using namespace std;
// main program
int main()
{
    char op;
    float num1, num2;
    // it allows user to enter operation i.e. +, -, /
    cin >> op;
    // it allow user to enter the operator
    cin >> num1 >> num2;
    // switch statement begins
    switch (op)
    {
    // if user enter +
    case '+':
        cout << num1 + num2;
        break;
    // if user enter -
    case '-':
        cout << num1 - num2;
        break;
    // if user enter *
    case '*':
        cout << num1 * num2;
        break;
    // if user enter /
    case '/':
        cout << num1 / num2;
        break;
    // if operathor is other than +, -, *, or /,
    // error message will display
    default:
        cout << "error! operator is not correct";
    } // switch statement ends
    return 0;
}
