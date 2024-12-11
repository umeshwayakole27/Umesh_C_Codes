#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    printf("Sum of %d, %d and %d is %d\n", a, b, c, a+b+c);
    return 0;
}