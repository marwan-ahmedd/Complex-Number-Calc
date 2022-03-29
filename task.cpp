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

bool isNumeric(string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false; //when one non numeric value is found, return false
      return true;
}

complex<double> complex_number(int num)
{
    double real, imag;
    string strReal, strImag;
    cout << "Real [" << num << "]: ";
    cin >> strReal;
    while (isNumeric(strReal) == false )
    {
        cout << "invalid input please enter a number:";
        cin.clear();
        cin.sync();
        cin >> strReal;
    }
    real = stoi(strReal);

    cout << "Imaginary [" << num << "]: ";
    cin >> strImag;
    while (isNumeric(strImag) == false )
    {
        cout << "invalid input please enter a number:";
        cin.clear();
        cin.sync();
        cin >> strImag;
    }
    imag = stoi(strImag);
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
