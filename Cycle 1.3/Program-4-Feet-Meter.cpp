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
    operator float()
    {
        return (((feet * 12 + inch) * 2.54) / 100);
    }
};

int main()
{
    Distance D;
    float meter = D;
    cout << "\n Convertion of Feet and inch distance to Meter: " << meter << "m";
    return 0;
}