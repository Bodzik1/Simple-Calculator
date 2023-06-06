#include <iostream>
#include <cmath>

using namespace std;

/* this is going to be all the functions we going to be using
    to calculate the problem that the user has given us  */

double add(double i, double n)
{
    double add = i + n;
    return add;
}

double subtract(double i, double n)
{
    double subtract = i - n;
    return subtract;
}

double multiply(double i, double n)
{
    double multiply = i * n;
    return multiply;
}

double divid(double i, double n)
{
    double divid = i / n;
    return divid;
}

// double remainder(double i, double n){
//     double remainder = i % n;
//     return remainder;
// }

double power(double i, double n)
{
    double power = pow(i, n);
    return power;
}

/* In the main fuction we are asking the user to give us the values and what operation
    we going to be doing for the problems. */

int main()
{

    double num1, num2;

    char op;

    string ans;

    cout << "Please enter your equation: ";
    cin >> num1 >> op >> num2;

    do
    {
        switch (op)
        {
        case '+':
            cout << "Your answer is: " << add(num1, num2);
            break;
        case '-':
            cout << "Your answer is: " << subtract(num1, num2);
            break;
        case '*':
            cout << "Your answer is: " << multiply(num1, num2);
            break;
        case '/':
            cout << "Your answer is: " << divid(num1, num2);
            break;
        //
        case '^':
            cout << "Your answer is: " << power(num1, num2);
            break;
        default:
            cout << "Not a vaild expression please input again: ";
            return 0;
        }
    } while (ans == "yes" || ans == "Yes" || ans == "y" || ans == "Y");

        return 0;
}