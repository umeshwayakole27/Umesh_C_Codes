#include <stdio.h>
int main()
{
    label: printf("Hello\n");
    goto label;
    return 0;
}