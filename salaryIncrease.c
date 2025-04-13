#include <stdio.h>

int main()
{
    // variable declaration
    double salary, newSalary, earnedMoney;
    int percentage;
    // take input
    scanf("%lf", &salary);
    // check condition for salary range
    if (salary > 0 && salary <= 400.00)
    {
        earnedMoney = salary * (15 / 100.00);
        newSalary = salary + earnedMoney;
        percentage = 15;
    }
    else if (salary > 400.00 && salary <= 800.00)
    {
        earnedMoney = salary * (12 / 100.00);
        newSalary = salary + earnedMoney;
        percentage = 12;
    }
    else if (salary > 800.00 && salary <= 1200.00)
    {
        earnedMoney = salary * (10 / 100.00);
        newSalary = salary + earnedMoney;
        percentage = 10;
    }
    else if (salary > 1200.00 && salary <= 2000.00)
    {
        earnedMoney = salary * (7 / 100.00);
        newSalary = salary + earnedMoney;
        percentage = 7;
    }
    else if (salary > 2000.00)
    {
        earnedMoney = salary * (4 / 100.00);
        newSalary = salary + earnedMoney;
        percentage = 4;
    }
    // print the result
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", newSalary, earnedMoney, percentage);
}