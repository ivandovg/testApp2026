// mainApp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyCalculate.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";
    double a, b;
    cout << "\nEnter a: ";
    cin >> a;
    cout << "\nEnter b: ";
    cin >> b;
    cout << "\nResult: " << a + b << endl;
    MyCalculate c(a, b);
    cout << "\nMultiply: " << c.Mul(a, b) << endl;

    system("pause");
    return 0;
}
