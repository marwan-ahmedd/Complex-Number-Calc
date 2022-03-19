#include <complex>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string calc(complex<double> operation)
{
    ostringstream strCin{};
    strCin << operation.real() << " + (" << operation.imag() << ")i";
    return strCin.str();
}


complex<double> complex_number(int num)
{
    double real, imag;
    cout << "Real [" << num << "]: ";
    cin >> real;
    

    cout << "Imaginary [" << num << "]: ";
    cin >> imag;
    return {real, imag};
}


int main()
{
    auto x = complex_number(1);
    auto y = complex_number(2);
    

    char oper;
    cout << "Enter the operator: ";
    cin >> oper;

    if (oper == '+')
    {
        cout << x << " + " << y << " = "<< calc(x + y);
    }
    else if (oper == '-')
    {
        cout << x << " - " << y << " = "<< calc(x - y);
    }
    else if (oper == '*')
    {
        cout << x << " * " << y << " = " << calc(x * y);
    }
    else if (oper == '/')
    {
        cout << x << " / " << y << " = " << calc(x / y);
    }

}