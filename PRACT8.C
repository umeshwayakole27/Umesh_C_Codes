/*
Practical No - 8
Title - Write a program to find square, square root, cube, cube root of a number using switch case statement.
Name - Umesh Madhukar Wayakole
*/

#include <stdio.h>
#include <math.h>
int main() {
    int choice, number;
    float guess, result;
    // clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Choose an operation to perform:\n1. Square\n2. Square Root\n3. Cube\n4. Cube Root\nEnter your choice: ");
    scanf("%d", &choice);
	// while(choice != 5)
	// {
		switch (choice) {
		case 1:
			result = number * number;
			printf("Square of %d is %f\n", number, result);
			break;
		case 2:
			result = pow(number,1.0/2);
			printf("Square root of %d is %f\n", number, result);
			break;
		case 3:
			result = number * number * number;
			printf("Cube of %d is %f\n", number, result);
			break;
		case 4:
			result = pow(number,1.0/3);
			printf("Cobe root of %d is %f\n", number, result);
			break;
		case 5:
			break;
		default:
			if (choice > 5)
			{
				printf("Invalid choice\n");
				break;
			}
		}
	// }
    // getch();
    return 0;
}

/*

Enter a number: 5
Choose an operation to perform:
1. Square
2. Square Root
3. Cube
4. Cube Root
Enter your choice: 1
Square of 5 is 25.000000

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
