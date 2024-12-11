#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char *a, *b, *t;
    clrscr();
    puts("Enter a string: ");
    gets(a);
    puts("Enter another string: ");
    gets(b);
    t = a;
    while (*t != '\0')
    {
	t++;
    }
    while (*b != '\0')
    {
	*t = *b;
	t++, b++;
    }
    *t = '\0';
    puts("Concatenated string is: ");
    puts(a);
    getch();
    return 0;
}