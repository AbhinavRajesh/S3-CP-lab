#include <iostream>
#include <math.h>

using namespace std;

class Polar
{
    float radius, angle;

public:
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void show()
    {
        cout << "\n In Polar Form: \n radius: " << radius << "\n angle: " << angle;
    }
    float getRadius()
    {
        return radius;
    }
    float getAngle()
    {
        return angle;
    }
};

class Rectangular
{
    float x, y;

public:
    void operator=(Polar P)
    {
        x = (int)((P.getRadius() * cos((P.getAngle() * M_PI) / 180) * 100 + 0.5));
        x = (float)(x / 100);
        y = (int)((P.getRadius() * sin((P.getAngle() * M_PI) / 180) * 100 + 0.5));
        y = (float)(y / 100);
    }
    void show()
    {
        cout << "\n Coordinates in Recatangular form: \n x: " << x << "\n y: " << y;
    }
};

int main()
{
    float r, a;
    cout << "\n Enter the Radius: ";
    cin >> r;
    cout << "\n Enter the Angle: ";
    cin >> a;
    Polar P(r, a);
    P.show();
    Rectangular R;
    R = P;
    R.show();
    return 0;
}