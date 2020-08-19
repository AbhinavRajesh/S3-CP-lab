#include <iostream>
using namespace std;

void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "\n Value of variables after swap in swapValue() function [ Call By Value Method ] \n";
    cout << " a = " << a << "\n b = " << b;
}

void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "\n Value of variables after swap in swapReference() function [ Call By Reference Method ] \n";
    cout << " a = " << a << "\n b = " << b;
}

void swapAddress(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "\n Value of variables after swap in swapAddress() function [ Call By Address Method ] \n";
    cout << " a = " << *a << "\n b = " << *b;
}

int main()
{
    int a, b, temp;
    cout << "\n Enter the values of a and b:";
    cin >> a >> b;
    cout << "\n Values of variable: \n"
         << " a = " << a << "\n b = " << b;
    swapValue(a, b);
    cout << "\n Values of variables in Main after Call by Value Method \n";
    cout << " a = " << a << "\n b = " << b;
    swapReference(a, b);
    cout << "\n Values of variables in Main after Call by Reference Method \n";
    cout << " a = " << a << "\n b = " << b;
    temp = a;
    a = b;
    b = temp;
    cout << "\n Values of variable: \n"
         << " a = " << a << "\n b = " << b;
    swapAddress(&a, &b);
    cout << "\n Values of variables in Main after Call by Address Method \n";
    cout << " a = " << a << "\n b = " << b;
}