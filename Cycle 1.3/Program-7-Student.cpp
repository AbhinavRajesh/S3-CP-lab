#include <iostream>

#define STUDNO 10

using namespace std;

class Student
{
protected:
    string name;
    int age;
    long int regNumber;

public:
    virtual void sort(int n) = 0;
};

class Btech : public Student
{
    float marks;

public:
    bool validate()
    {
        if (age <= 0 || regNumber <= 0 || marks < 0)
            return false;
        return true;
    }
    void getData()
    {
    BtechLabel:
        cout << "\n Enter the Name: ";
        cin >> name;
        cout << "\n Enter the Register Number: ";
        cin >> regNumber;
        cout << "\n Enter the Age: ";
        cin >> age;
        cout << "\n Enter the marks: ";
        cin >> marks;
        if (!validate())
        {
            cout << "\n The entered data is invalid! Enter the details of the student again!";
            goto BtechLabel;
        }
    }
    void sort(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (this[j].marks > this[j + 1].marks)
                {
                    Btech temp = this[i];
                    this[i] = this[i + 1];
                    this[i + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (this[j].marks == this[j + 1].marks)
                {
                    if (this[j].name > this[j + 1].name)
                    {
                        Btech temp = this[i];
                        this[i] = this[i + 1];
                        this[i + 1] = temp;
                    }
                }
            }
        }
    }
    void showData()
    {
        cout << name << "\t" << regNumber << "\t" << age << "\t" << marks;
    }
};
class Mtech : public Student
{
    float gpa;

public:
    bool validate()
    {
        if (age <= 0 || regNumber <= 0 || gpa < 0)
            return false;
        return true;
    }
    void getData()
    {
    MtechLabel:
        cout << "\n Enter the Name: ";
        cin >> name;
        cout << "\n Enter the Register Number: ";
        cin >> regNumber;
        cout << "\n Enter the Age: ";
        cin >> age;
        cout << "\n Enter the GPA: ";
        cin >> gpa;
        if (!validate())
        {
            cout << "\n The entered data is invalid! Enter the details of the student again!";
            goto MtechLabel;
        }
    }
    void sort(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (this[j].gpa > this[j + 1].gpa)
                {
                    Mtech temp = this[i];
                    this[i] = this[i + 1];
                    this[i + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (this[j].gpa == this[j + 1].gpa)
                {
                    if (this[j].name > this[j + 1].name)
                    {
                        Mtech temp = this[i];
                        this[i] = this[i + 1];
                        this[i + 1] = temp;
                    }
                }
            }
        }
    }
    void showData()
    {
        cout << name << "\t" << regNumber << "\t" << age << "\t" << gpa;
    }
};

int main()
{
    Student *S;
    Btech B[STUDNO];
    Mtech M[STUDNO];
    int choice, n;

    while (true)
    {
        cout << "\n ----Enter Programme----";
        cout << "\n 1. B-Tech";
        cout << "\n 2. M-Tech";
        cout << "\n 0. Exit";
        cout << "\n Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            S = B;
            cout << "\n Enter the number of Students in B-Tech: ";
            cin >> n;
            cout << "\n Enter the Data: \n";
            for (int i = 0; i < n; i++)
                B[i].getData();
            S->sort(n);
            cout << "\n Marklist of B-Tech Student (Sorted According to Marks)\n";
            cout << "Name"
                 << "\t"
                 << "Reg No"
                 << "\t"
                 << "Age"
                 << "\t"
                 << "Marks" << endl;

            for (int i = n - 1; i >= 0; i--)
            {
                B[i].showData();
                cout << endl;
            }
            break;
        case 2:
            S = M;
            cout << "\n Enter the number of Students in M-Tech: ";
            cin >> n;
            cout << "\n Enter the Data: \n";
            for (int i = 0; i < n; i++)
                M[i].getData();
            S->sort(n);
            cout << "\n Marklist of M-Tech Student (Sorted According to GPA)\n";
            cout << "Name"
                 << "\t"
                 << "Reg No"
                 << "\t"
                 << "Age"
                 << "\t"
                 << "GPA" << endl;
            for (int i = n - 1; i >= 0; i--)
            {
                M[i].showData();
                cout << endl;
            }
            break;
        default:
            cout << "\n Invalid Choice! Try Again!";
        }
    }
    return 0;
}