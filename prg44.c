//WAP to display contents of a file on the screen

#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    //clrscr();
    fp = fopen("prg44.c", "r");
    if(fp ==  NULL)
    {
        printf("File does not exist...");
        //getch();
        return 0;
    }
    while((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    //getch();
    return 0;
}