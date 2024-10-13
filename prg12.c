//write a program to read the percentage marks of a student and then display the class in which he is passed.
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the percentage marks of a student\n");
    scanf("%d", &marks);
    if (marks >= 75)
    {
        printf("The student is passed in distinction\n");
    }
    else if (marks >= 60 && marks < 75)
    {
        printf("The student is passed in first class\n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("The student is passed in second class\n");
    }
    else if (marks >= 40 && marks < 50)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}