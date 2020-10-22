#include <iostream>
using namespace std;

class Average
{
    int a[20];

public:
    int *returnArray()
    {
        return &a[0];
    }
    void init(int n)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }
    float static findAverage(int *ptr, int n, int multi = 1)
    {
        int i;
        float avg = 0;
        for (i = 0; i < n; i++)
        {
            *(ptr + i) *= multi;
            avg += *(ptr + i);
        }
        return (avg / n);
    }
} obj1, obj2, obj3;

int main()
{
    int i, n, multi;
    float average1, average2;
    cout << "\n Enter the number of digits in the array:";
    cin >> n;
    cout << "\n Enter the digits: ";
    obj1.init(n);
    average1 = obj1.findAverage(obj1.returnArray(), n);
    cout << "\n Average: " << average1;
    cout << "\n Enter the number that has to be multiplied with each element in the array:";
    cin >> multi;
    obj2 = obj1;
    average2 = obj2.findAverage(obj2.returnArray(), n, multi);
    cout << "\n Average after multiplying " << multi << " with every element: " << average2;
}