/*Write a C program to find the HCF (Highest Common Factor) of two numbers.*/
#include <stdio.h>

int main() {
    int n1, n2,hcf;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    int min = (n1 < n2) ? n1 : n2;

    for (int i = 1; i <= min; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is %d\n", n1, n2, hcf);
    getch();
    return 0;
}

/*
Enter two numbers: 12 18
HCF of 12 and 18 is 6
*/