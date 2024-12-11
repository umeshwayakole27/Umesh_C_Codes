/*
Practical No. - 15
Title - Write a Program to display strong number from n to m by passing argument from command line
Name - Umesh Madhukar Wayakole
*/
#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    int i;
    int f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int strong(int n)
{
    int rem;
    int sum = 0;
    int num = n;
    while (n > 0)
    {
        rem = n % 10;
        sum += fact(rem);
        n = n / 10;
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char *argv[])
{
    int n, m, i;
    clrscr();
    n = atoi(argv[1]);
    m = atoi(argv[2]);
    for (i = n; i <= m; i++)
    {
        if (strong(i))
        {
            printf("%d is a strong number\n", i);
        }
    }
    getch();
    return 0;
}

/*
OUTPUT:

C:\TURBOC3\BIN>cd ..

C:\TURBOC3>cd source
                                                                                
C:\TURBOC3\SOURCE>PRACT15 10 10000                                              
145 is a strong number                                                          
                                                                                
C:\TURBOC3\SOURCE>exit                                                          

*/