#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("%d\n", a);
    goto label;
    printf("%d\n", b);
label:
    return 0;
}