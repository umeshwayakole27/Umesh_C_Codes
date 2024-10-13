/*
Practical number 1
Title - Write a program to rotate values of variables x,y and z such that
x-->y, y-->z, z-->x
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,t;
	clrscr();
	printf("Enter three integer values\t");
	scanf("%d%d%d",&x,&y,&z);
	printf("Before Rotation values are \n");
	printf("X= %d Y= %d Z= %d\n",x,y,z);
		x = x + y + z;  //  x = 1+2+3 = 6
		y = x - y - z;  //  y = 6-2-3 = 1
		z = x - y - z;  //  z = 6-1-3 = 2
		x = x - y - z;  //  x = 6-1-2 = 3
	printf("After Rotation values are \n");
	printf("X= %d Y= %d Z= %d",x,y,z);
	getch();
}
/*

Enter three integer values      3 4 5
Before Rotation values are
X= 3 Y= 4 Z= 5
After Rotation values are
X= 5 Y= 3 Z= 4

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


