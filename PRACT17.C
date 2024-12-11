/*
Practical No – 17
Title - Write a program to demonstrate nested structure.
Name - Umesh Madhukar Wayakole
*/

#include<stdio.h>
struct emp
{
    int empid;
    char empname[40];
    struct salary
    {
        int basic;
        int da;
        int hra;
    }sal;
};
int main()
{
    struct emp e;
    clrscr();
    printf("Enter the employee id: ");
    scanf("%d",e.empid);
    printf("Enter employee name: ");
    fflush(stdin);
    gets(e.empname);
    printf("Enter the salary: ");
    scanf("%d%d%d",&e.sal.basic,&e.sal.da,&e.sal.hra);
    printf("Emp id=%d",e.empid);
    printf("\tEmp name=%s",e.empname);
    printf("\tEmp salary=%d",e.sal.basic+e.sal.da+e.sal.hra);
    getch();
    return 0;

}

/*
OUTPUT:
Enter the employee id: 1
Enter employee name: Umesh
Enter the salary: 10000 2000 3000
Emp id=1	Emp name=Umesh	Emp salary=15000
*/