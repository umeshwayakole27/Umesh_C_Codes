/*
Practical No - 8
Title - Write a program to find square, square root, cube, cube root of a number using switch case statement.
Name - Umesh Madhukar Wayakole
*/

#include <stdio.h>

int main() {
    int choice, number;
    float guess, result;
    // clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Choose an operation to perform:\n1. Square\n2. Square Root\n3. Cube\n4. Cube Root\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
	case 1:
	    result = number * number;
	    printf("Square of %d is %f\n", number, result);
	    break;
	case 2:
	    result = number;
	    guess = number / 2.0;
	    while (guess != result) {
		result = guess;
		guess = (number / guess + guess) / 2.0;
	    }
	    printf("Square Root of %d is %f\n", number, result);
	    break;
	case 3:
	    result = number * number * number;
	    printf("Cube of %d is %f\n", number, result);
	    break;
	case 4:
	    result = number;
	    guess = number / 3.0;
	    while (guess != result) {
		result = guess;
		guess = (2.0 * guess + number / (guess * guess)) / 3.0;
	    }
	    printf("Cube Root of %d is %f\n", number, result);
	    break;
	default:
	    printf("Invalid choice\n");
	    break;
    }
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

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
