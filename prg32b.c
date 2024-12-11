#include <stdio.h>

void copy(char *p,char *q)
{
    while(*q != '\0')
    {
        *p = *q;
        p++,q++;
    }
    *p = '\0';
}
void display(char *x)
{
    puts(x);
}
int main()

{
    char *a,*b;
    clrscr();
    puts("Enter a string: ");
    gets(a);
    copy(b,a);
    puts("Original String is: ");
    display(a);
    puts("Copied String is: ");
    display(b);
    getch();
    return 0;
}