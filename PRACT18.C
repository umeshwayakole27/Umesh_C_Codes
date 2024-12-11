/*
Practical No. - 18
Title: Write a program to demonstrate bit fields in a structure.
Name: Umesh Madhukar Wayakole
*/
#include <stdio.h>
#include <conio.h>
struct example_bitField {
  int val1;
  int val2;
};

struct example_bitField2 {
  int val1: 1;
  int val2: 1;
};

int main(void) 
{
  clrscr();
  printf(" \n Size of memory engaged by example_bitField : %d ", sizeof(struct example_bitField));
  printf(" \n Size of memory engaged by example_bitField2: %d ", sizeof(struct example_bitField2));
  getch();
  return 0;
}


/*
OUTPUT:
Size of memory engaged by example_bitField : 8
Size of memory engaged by example_bitField2: 4
*/