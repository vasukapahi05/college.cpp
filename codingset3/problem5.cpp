#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    float salary;
};

// Function to find highest salary
Employee highestSalary(Employee e[], int n)
{
    Employee max = e[0];

    for (int i = 1; i < n; i++)
    {
        if (e[i].salary > max.salary)
            max = e[i];
    }

    return max;
}

// Function to increase salary by 10%
Employee increaseSalary(Employee e)
{
    e.salary = e.salary + (e.salary * 10 / 100);
    return e;
}

int main()
{
    Employee e[3];

    e[0].name = "Ali";
    e[0].salary = 30000;

    e[1].name = "Sara";
    e[1].salary = 50000;

    e[2].name = "John";
    e[2].salary = 40000;

    Employee high = highestSalary(e, 3);

    cout << "Highest Salary Employee: " << high.name << endl;
    cout << "Salary: " << high.salary << endl;

    Employee revised = increaseSalary(high);

    cout << "After 10% Increment: " << revised.salary << endl;

    return 0;
}
