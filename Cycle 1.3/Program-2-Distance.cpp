#include <iostream>

using namespace std;

class Distance
{
    int feet, inch;

public:
    void validate()
    {
        if (feet <= 0 || inch <= 0)
        {
            cout << "\n The distance cannot be negative!";
            exit(0);
        }
    }
    void init()
    {
        cout << "\n Enter Feet: ";
        cin >> feet;
        cout << "\n Enter Inch: ";
        cin >> inch;
        validate();
    }
    void display()
    {
        feet += inch / 12;
        inch %= 12;
        cout << "\n Feet: " << feet;
        cout << "\n Inch: " << inch;
    }
    Distance operator+(Distance &d)
    {
        Distance temp;
        temp.inch = inch + d.inch;
        temp.feet = feet + d.feet + temp.inch / 12;
        temp.inch %= 12;
        return temp;
    }
    friend Distance operator<(Distance &, Distance &);
};

Distance operator<(Distance &d1, Distance &d2)
{
    int inch1 = d1.feet * 12 + d1.inch;
    int inch2 = d2.feet * 12 + d2.inch;
    if (inch1 > inch2)
        return d1;
    else
        return d2;
}

int main()
{
    Distance d1;
    d1.init();
    d1.display();
    Distance d2;
    d2.init();
    d2.display();
    Distance d3 = d1 + d2;
    cout << "\n Displaying the sum using + operator overloading: ";
    d3.display();
    cout << "\n The bigger of the two using < operator overloading: ";
    Distance temp = d1 < d2;
    temp.display();
    return 0;
}