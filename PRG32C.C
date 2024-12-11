int main()
{
    char *a,*b;
    int i=0;
    clrscr();
    puts("Enter a string: ");
    gets(a);
    while(*(a+i) != '\0')
    {
	*(b+i) = *(a+i);
	i++;
    }
    *(b+i) = '\0';
    puts("Copied string is: ");
    puts(b);
    getch();
    return 0;
}