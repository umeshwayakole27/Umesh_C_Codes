#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct invent {
    char name[20];
    int number;
    int price;
};
int main()
{
    struct invent product[3];
    struct invent *ptr;
    int i = 0;
    printf("Enter the data for 3 products:\n");
    for (p = product; p<product + 3; p++)
    {
        printf("\nProduct %d:\n", i + 1);
        scanf("%s %d %d", p->name, &p->number, &p->price);
        i++;
    }
    printf("\nProducts entered: \n");
    for (p = product; p<product + 3; p++)
    {
        printf("%s %d %d\n", p->name, p->number, p->price);
    }
    return 0;
    
}