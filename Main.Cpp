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

double power(double i, double n)
{
    double power = pow(i, n);
    return power;
}

/* In the main fuction we are asking the user to give us the values and what operation
    we going to be doing for the problems. */

int main()
{

    bool repeat = true;

    double num1, num2;

    char op;

    string ans;

    /* We have a while loop for bool to check if the user wants to still continue or if
        the user gave us a bad input  */
    while (repeat = true)
    {
        cout << "Please enter your equation: ";
        cin >> num1 >> op >> num2;

        switch (op)
        {
            case '+':
                cout << "Your answer is: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Your answer is: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Your answer is: " << multiply(num1, num2) << endl;
                break;
            case 'x':
                cout << "Your answer is: " << multiply(num1, num2) << endl;
                break;
            case 'X':
                cout << "Your answer is: " << multiply(num1, num2) << endl;
                break;
            case '/':
                cout << "Your answer is: " << divid(num1, num2) << endl;
                break;
            case '^':
                cout << "Your answer is: " << power(num1, num2) << endl;
                break;
            default :
                    cout << "Invaild expression please try again" << endl;
                    cin.clear();
                    cin.ignore(123, '\n');
                    repeat = true;
        }
    }
}