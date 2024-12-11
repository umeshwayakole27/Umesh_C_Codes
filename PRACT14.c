/*
Practical No. - 14
Title - Write a recursive program to test whether given number is prime
Name - Umesh Madhukar Wayakole
*/
#include <stdio.h>
int testprime(int n, int i)
{
    if(i==1)
        return 1;
    else
    {
        if(n%i==0)
            return 0;
        else
            return testprime(n, i-1);
    }
}
int main()
{
    int num, flag;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    flag = testprime(num, num/2);
    if(flag==1)
        printf("The number is Prime");
    else
        printf("The number is not Prime");
    getch();
    return 0;
}

/*
OUTPUT:
Enter a number: 5
The number is Prime

*/