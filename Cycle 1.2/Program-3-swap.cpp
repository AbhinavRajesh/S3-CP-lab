#include <iostream>
using namespace std;

class Swap
{

public:
    int number;
    Swap()
    {
        cout << "\n Enter the Number:";
        cin >> number;
        cout << "\n Values of Number: \n"
             << number;
    }
};

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
    int temp;
    Swap a, b;
    swapValue(a.number, b.number);
    cout << "\n Values of variables in Main after Call by Value Method \n";
    cout << " a = " << a.number << "\n b = " << b.number;
    swapReference(a.number, b.number);
    cout << "\n Values of variables in Main after Call by Reference Method \n";
    cout << " a = " << a.number << "\n b = " << b.number;
    temp = a.number;
    a.number = b.number;
    b.number = temp;
    cout << "\n Values of variable: \n"
         << " a = " << a.number << "\n b = " << b.number;
    swapAddress(&a.number, &b.number);
    cout << "\n Values of variables in Main after Call by Address Method \n";
    cout << " a = " << a.number << "\n b = " << b.number;
    return 0;
}