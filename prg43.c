#include <stdio.h>
 void SortArray(int arr[],int n)
 {
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
 }
    int main()
    {
        int arr[100],n,i;
        printf("Enter the number of elements in the array: ");
        scanf("%d",&n);
        printf("Enter the elements of the array: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        SortArray(arr,n);
        printf("The sorted array is: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        return 0;
    }