#include<stdio.h>
int main()
{
    float salary, incri, newsalary;
    int m1 = 15, m2 = 12, m3 = 10, m4 = 7, m5 = 4;

    scanf("%f", &salary);

    if(salary > 0 && salary <= 400.00)
    {

        incri = (salary * 15) / 100;
        newsalary = salary + incri;

        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", incri);
        printf("Em percentual: %d %%\n", m1);
    }
    else if(salary <= 800.00)
    {
        incri = (salary * 12) / 100;
        newsalary = incri + salary;

        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", incri);
        printf("Em percentual: %d %%\n", m2);
    }
    else if(salary <= 1200)
    {
        incri = (salary * 10) / 100;
        newsalary = incri + salary;


        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", incri);
        printf("Em percentual: %d %%\n", m3);
    }
    else if(salary <= 2000)
    {
        incri = (salary * 7) / 100;
        newsalary = incri + salary;


        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", incri);
        printf("Em percentual: %d %%\n", m4);
    }
    else
    {
        incri = (salary * 4) / 100;
        newsalary = incri + salary;


        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", incri);
        printf("Em percentual: %d %%\n", m5);
    }
    return 0;
}
