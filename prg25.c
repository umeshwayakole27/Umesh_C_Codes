#include <stdio.h>
int main()
{
    int i;
    printf("First natural numbers are:\n");
    i=1;
    for( ; ; )
    {
        printf("%d\n",i);
        if(i==10)
        {
            break;
        }
        i++;
    }
    return 0;
}