#include <iostream>

using namespace std;

class Employee
{
protected:
    string name;
    long int employeeNumber;
    float payRate;

public:
    Employee()
    {
        cout << "\n Enter the name of the Employee: ";
        cin >> name;
        cout << "\n Enter the Employee Number: ";
        cin >> employeeNumber;
        cout << "\n Enter the Pay Rate: ";
        cin >> payRate;
    }
    virtual void pay()
    {
        cout << "\n Pay Rate: " << payRate;
    }
};

class Manager : public Employee
{
    bool isSalaried;

public:
    Manager()
    {
    ManagerPayLabel:
        cout << "\n ----Pay Method----";
        cout << "\n 1. Hourly";
        cout << "\n 2. Salary";
        int choice;
        cin >> choice;
        if (choice == 1)
            isSalaried = false;
        else if (choice == 2)
            isSalaried = true;
        else
        {
            cout << "\n Invalid Choice! Try Again!";
            goto ManagerPayLabel;
        }
    }
    void pay()
    {
        if (isSalaried)
        {
            cout << "\n Pay: " << payRate;
        }
        else
        {
            float hoursWorked;
            cout << "\n Enter the amount of hours worked: ";
            cin >> hoursWorked;
            cout << "\n Pay: " << hoursWorked * payRate;
        }
    }
};

class Supervisor : public Employee
{
    string department;

public:
    Supervisor()
    {
        cout << "\n What is the department: ";
        cin >> department;
    }
    void pay()
    {
        cout << "\n Pay: " << payRate;
    }
};

void functionManager()
{
    Manager M;
    M.pay();
}

void functionSupervisor()
{
    Supervisor S;
    S.pay();
}

int main()
{
    int choice;
    bool again = true;
    char ch;
    while (again)
    {
        cout << "\n -----MENU----";
        cout << "\n 1. Manager";
        cout << "\n 2. Supervisor";
        cout << "\n Enter your choice: (1/2) ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            functionManager();
            break;
        case 2:
            functionSupervisor();
            break;
        default:
            cout << "\n Incorrect Choice! Try Again!";
        };
        cout << "\n Do you want to continue? (Press n/N to exit)";
        cin >> ch;
        if (ch == 'n' || ch == 'N')
            again = false;
    }
    return 0;
}