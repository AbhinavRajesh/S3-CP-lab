#include <iostream>

using namespace std;

class Average
{
    static int a[20];
    static int size;

public:
    void init(int n)
    {
        size = n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }
    float static findAverage()
    {
        int i;
        float avg = 0;
        for (i = 0; i < size; i++)
            avg += a[i];
        return (avg / size);
    }
    void multiply(int multi)
    {
        for (int i = 0; i < size; i++)
            a[i] *= multi;
    }
    void ascending()
    {
        int temp, i, j;
        for (i = 0; i < size; i++)
            for (j = 0; j < size - i - 1; j++)
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
    }
    void outputArray()
    {
        for (int i = 0; i < size; i++)
            cout << " " << a[i];
    }
};

int Average::a[];
int Average::size;

int main()
{
    Average obj1, obj2, obj3;
    int n, multi;
    float average;
    cout << "\n Enter the number of digits in the array: ";
    cin >> n;
    cout << "\n Enter the digits: ";
    obj1.init(n);
    cout << "\n Entered Array: \n";
    obj1.outputArray();
    average = obj1.findAverage();
    cout << "\n Average: " << average;
    cout << "\n Enter the number that has to be multiplied with each element in the array:";
    cin >> multi;
    obj2.multiply(multi);
    cout << "\n Array after multiplying with a number: \n";
    obj2.outputArray();
    average = obj1.findAverage();
    cout << "\n Average using first object after multiplying " << multi << " with every element: " << average;
    obj3.ascending();
    cout << "\n Array after arranging the number in ascending order: ";
    obj3.outputArray();
    return 0;
}