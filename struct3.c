#include <stdio.h>
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
    printf("Enter the employee id: ");
    scanf("%d",e.empid);
    printf("Enter employee name: ");
    fflush(stdin);
    gets(e.empname);
    printf("Enter the salary: ");
    scanf("%d%d%d",&e.sal.basic,&e.sal.da,&e.sal.hra);
    printf("Emp id=%d",e.empid);
    printf("Emp name=%s",e.empname);
    printf("Emp salary=%d",e.sal.basic+e.sal.da+e.sal.hra);
    return 0;

}