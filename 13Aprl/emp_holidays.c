#include <stdio.h>

int main()
{
    int salary, finalsalary;
    int holidays;
    printf ("Enter the number of holidays taken: \n ");
    scanf("%d", &holidays);
    printf ("Enter the salary: \n");
    scanf("%d", &salary);
    
    if( holidays >=2 && holidays <= 5)
    {
        printf("5 percent Salary deduction \n");
        finalsalary = salary - (0.05 * salary) ;
        printf("Salary after 5percent deduction: %d", finalsalary);

    }
    else if( holidays >5 && holidays <= 14)
    {
        printf("10 percent Salary deduction \n");
        finalsalary = salary - (0.10)*salary ;
        printf("Salary after 10 percent deduction: %d", finalsalary);

    }
    else if( holidays == 15)
    {
        printf("50 percent Salary deduction \n");
        finalsalary = salary - (0.50)*salary ;
        printf("Salary after 50 percent deduction: %d", finalsalary);

    }
    else if( holidays >=15 && holidays <= 31 )
    {
        printf("100 percent Salary deduction \n");
        finalsalary = 0 ;
        printf("Salary after 100 percent deduction: %d", finalsalary);

    }
    else{
        
        finalsalary = salary;
        printf("Full Salary granted: %d", finalsalary);

    }
    return 0;
}