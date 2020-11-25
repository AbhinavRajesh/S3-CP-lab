#include <iostream>

using namespace std;

class Distance
{
    int feet, inch;

public:
    Distance()
    {
        cout << "\n Enter Feet: ";
        cin >> feet;
        cout << "\n Enter Inch: ";
        cin >> inch;
    }
    Distance(float meter)
    {
        inch = (meter * 100) / 2.54;
        feet = inch / 12;
        inch = inch % 12;
    }
    void show()
    {
        cout << "\n Feet: " << feet;
        cout << "\n Inch: " << inch;
    }
    operator float()
    {
        return (((feet * 12 + inch) * 2.54) / 100);
    }
};

int main()
{
    float input;
    Distance D;
    float meter = D;
    cout << "\n Convertion of Feet and inch distance to Meter: " << meter << "m";
    cout << "\n Enter the distance in Meter to convert to Feet and Inch: ";
    cin >> input;
    Distance D2 = input;
    D2.show();
    return 0;
}