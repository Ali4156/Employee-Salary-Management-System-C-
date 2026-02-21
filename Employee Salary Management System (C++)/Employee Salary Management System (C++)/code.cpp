#include<iostream>
#include<string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;

    void input();
    void display();
};

// Function Declaration
float updateSalary(Employee emp, int years);

int main()
{
    Employee emp;
    int years;

    emp.input();

    cout << "\nEnter employee years of working: ";
    cin >> years;

    float newSalary = updateSalary(emp, years);

    cout << "\n------ Employee Details ------\n";
    emp.display();

    cout << "Updated Salary (after bonus if applicable): " << newSalary << endl;

    return 0;
}

// Function Definitions

void Employee::input()
{
    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Department: ";
    getline(cin, department);

    cout << "Enter Salary: ";
    cin >> salary;
}

void Employee::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;
}

float updateSalary(Employee emp, int years)
{
    if (years > 2)
    {
        float bonus = emp.salary * 0.05;   // 5% bonus
        return emp.salary + bonus;
    }
    else
    {
        return emp.salary;
    }
}