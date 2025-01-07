/*
Practical No. - 19
Title - Write a program to copy contents of one file into another file.
Name: Umesh Madhukar Wayakole
*/

#include <stdio.h>
int main()
{
    FILE *fpin, *fpout;
    char ch;
    // clrscr();
    fpin = fopen("INPUT.TXT", "r");
    fpout = fopen("OUTPUT.TXT", "w");
    if (fpin == NULL || fpout == NULL)
    {
        printf("File does not exist...");
        // getch();
        return 0;
    }
    while ((ch = getc(fpin)) != EOF)
    {
        putc(ch, fpout);
    }
    printf("File copied successfully");
    // getch();
    return 0;
}

/*
OUTPUT:
File copied successfully
*/