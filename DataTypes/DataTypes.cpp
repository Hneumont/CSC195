#include <iostream>
#include "Employee.h"

using namespace std;

const float Employee::TAX = 0.1f;

int main()
{
    string name;
    char initial;
    short age;
    bool isAdult;
    unsigned int zipcode; 
    float wage;
    short daysWorked;
    float hoursWorkedPerDay[7];
    const float TAX = 0.1f; // 10% tax rate
    cout << "Enter First name: ";
    cin >> name;

    cout << "Enter inital of last name: ";
    cin >> initial;

    cout << "Enter age: ";
    cin >> age;
    isAdult = (age >= 18); // Determine adulthood status

    cout << "Enter zipcode: ";
    cin >> zipcode;

    cout << "Enter hourly wage: ";
    cin >> wage;

    cout << "Enter number of days worked (max 7): ";
    cin >> daysWorked;

    float totalHours = 0;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter hours worked for day " << (i + 1) << ": ";
        cin >> hoursWorkedPerDay[i];

        totalHours += hoursWorkedPerDay[i];
    }

    float grossIncome = totalHours * wage;
    float taxAmount = grossIncome * TAX;
    float netIncome = grossIncome - taxAmount;

    cout << "\nEmployee Payroll Summary\n";
    cout << "-------------------------\n";
    cout << "Name: " << name << " " << initial << ".\n";
    cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
    cout << "Zipcode: " << zipcode << "\n";
    cout << "Hourly Wage: $" << wage << " per hour\n";
    cout << "Total Hours Worked: " << totalHours << " hours\n";
    cout << "Gross Income: $" << grossIncome << "\n";
    cout << "Tax Amount: $" << taxAmount << "\n";
    cout << "Net Income: $" << netIncome << "\n";
}


void Employee::Read()
{
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter zipcode: ";
    cin >> zipcode;

    cout << "Enter hourly wage: ";
    cin >> wage;

    cout << "Enter total hours worked this week: ";
    cin >> hoursWorked;
}


void Employee::Write() {
    float weeklyGross = wage * hoursWorked;
    float weeklyTax = weeklyGross * TAX;
    float weeklyNet = weeklyGross - weeklyTax;
    float yearlyGross = weeklyGross * 52;
    float yearlyNet = yearlyGross - (yearlyGross * TAX);

    cout << "\nEmployee Payroll Summary\n";
    cout << "-------------------------\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Zipcode: " << zipcode << "\n";
    cout << "Hourly Wage: $" << wage << "\n";
    cout << "Hours Worked: " << hoursWorked << "\n";
    cout << "Weekly Gross Pay: $" << weeklyGross << "\n";
    cout << "Weekly Net Pay: $" << weeklyNet << "\n";
    cout << "Yearly Gross Pay: $" << yearlyGross << "\n";
    cout << "Yearly Net Pay: $" << yearlyNet << "\n";
}
