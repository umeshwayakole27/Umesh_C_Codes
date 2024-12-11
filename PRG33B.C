void append(char *p,char *q)
{
    while(*p != '\0')
    {
	p++;
    }
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
    puts("Enter another string: ");
    gets(b);
    append(a,b);
    puts("Concatenated string is: ");
    display(a);
    getch();
    return 0;
}