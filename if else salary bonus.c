#include<stdio.h>
int main(){
    float salary, bonus, total_salary;
    char sex;
    printf("Enter the salary: ");
    scanf("%f", &salary);
    printf("Enter the sex (M/F): ");
    scanf(" %c", &sex);

    if (sex == 'M')
    {
        bonus = salary * 0.05;
    }
    else
    {
        bonus = salary * 0.1;
    }
    if (salary < 10000)
    {
        bonus += salary * 0.02;
    }
    total_salary = salary + bonus;
    printf("Total salary: %.2f", total_salary);
return 0;
}
