#include <iostream>
#include <math.h>
using namespace std;

void getCoordinate(int &x, int &y, int i)
{
    cout << "\n Enter the coordinate of the " << i << " triangle";
    cout << "\n Enter the X-Coordinate: ";
    cin >> x;
    cout << "\n Enter the Y-Coordinate: ";
    cin >> y;
}

int validate(int x1, int x2, int x3, int y1, int y2, int y3)
{
    float a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    float b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    float c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    float s = (a + b + c) / 2;
    if (s * (s - a) * (s - b) * (s - c) != 0)
        return 1;
    return 0;
}

inline void shortest(int x1, int x2, int x3, int y1, int y2, int y3)
{
    float l1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    float l2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    float l3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    cout << ((l1 > l2) ? ((l2 > l3) ? l3 : l2) : ((l1 > l3) ? l3 : l1));
}

int main()
{
    int x1, x2, x3, y1, y2, y3;
    getCoordinate(x1, y1, 1);
    getCoordinate(x2, y2, 2);
    getCoordinate(x3, y3, 3);
    int flag = validate(x1, x2, x3, y1, y2, y3);
    if (flag)
    {
        cout << "\n Valid Triangle! \n";
        cout << "The Shortest distance between 3 coordinates: ";
        shortest(x1, x2, x3, y1, y2, y3);
    }
    else
        cout << "\n Invalid Triangle!";
    return 0;
}