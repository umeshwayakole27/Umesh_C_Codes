/*
Practical No. - 11
Title - Write a Program to test whether a given number is
prime number using function
Name - Umesh Madhukar Wayakole
*/
#include <stdio.h>
int testprime(int n)
{
	int i,flag = 1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag = 0;
			break;
		}
	}
	if(flag==1)
		printf("The number is Prime");
	else
		printf("The number is not Prime");
	return 0;
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	testprime(num);
	return 0;
}

/* Enter a number: 5
The number is Prime
*/

/*
Enter a number: 6
The number is not Prime

*/