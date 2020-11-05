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
    void ascending(int n)
    {
        int temp, i, j;
        for (i = 0; i < n; i++)
            for (j = i; j < n - i - 1; j++)
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
    }
    void outputArray(int n)
    {
        for (int i = 0; i < n; i++)
            cout << " " << a[i];
    }
} obj1, obj2, obj3;

int main()
{
    int i, n, multi;
    float average;
    cout << "\n Enter the number of digits in the array:";
    cin >> n;
    cout << "\n Enter the digits: ";
    obj1.init(n);
    cout << "\n Entered Array: \n";
    obj1.outputArray(n);
    average = obj1.findAverage(obj1.returnArray(), n);
    cout << "\n Average: " << average;
    cout << "\n Enter the number that has to be multiplied with each element in the array:";
    cin >> multi;
    obj2 = obj1;
    average = obj2.findAverage(obj2.returnArray(), n, multi);
    cout << "\n Array after multiplying with a number: \n";
    obj2.outputArray(n);
    cout << "\n Average after multiplying " << multi << " with every element: " << average;
    obj3 = obj1;
    cout << "\n Average using 1st object: " << obj1.findAverage(obj1.returnArray(), n);
    obj3.ascending(n);
    cout << "\n Array after arranging the number in ascending order: ";
    obj3.outputArray(n);
    return 0;
}