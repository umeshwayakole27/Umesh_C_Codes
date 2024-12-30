/* write a program that accepts  three integers and find the maximum of three without using if statement or conditional operator*/

#include <stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a+b +abs(a-b))/2;
    max = (max+c +abs(max-c))/2;
    
}