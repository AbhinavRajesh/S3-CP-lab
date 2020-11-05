#include <iostream>
using namespace std;

class Swap
{

public:
    int a, b;
    Swap()
    {
        cout << "\n Enter the values of a and b:";
        cin >> a >> b;
        cout << "\n Values of variable: \n"
             << " a = " << a << "\n b = " << b;
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
    Swap s;
    swapValue(s.a, s.b);
    cout << "\n Values of variables in Main after Call by Value Method \n";
    cout << " a = " << s.a << "\n b = " << s.b;
    swapReference(s.a, s.b);
    cout << "\n Values of variables in Main after Call by Reference Method \n";
    cout << " a = " << s.a << "\n b = " << s.b;
    temp = s.a;
    s.a = s.b;
    s.b = temp;
    cout << "\n Values of variable: \n"
         << " a = " << s.a << "\n b = " << s.b;
    swapAddress(&s.a, &s.b);
    cout << "\n Values of variables in Main after Call by Address Method \n";
    cout << " a = " << s.a << "\n b = " << s.b;
}