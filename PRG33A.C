/*
Title - Write a program to concatenate two strings
*/
int main()
{
    char *a,*b;
    int len = 0,i=0;
    clrscr();
    puts("Enter a string: ");
    gets(a);
    puts("Enter another string: ");
    gets(b);
    while(*(a+len) != '\0')
	len++;
    while(*(b+i) != '\0')
    {
	*(a+len+i) = *(b+i);
	i++;
    }
    *(a+len+i) = '\0';
    puts("Concatenated string is: ");
    puts(a);
    getch();
    return 0;
}