//Bubble sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int numbers[50],n,i,j,temp;
    printf("\nEnter the size of array::");
    scanf("%d",&n);
    printf("\nEnter the array elements::");
    for(i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(numbers[j]>numbers[j+1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
    printf("\narray of bubble sort.");
    for(i=0;i<n;i++)
    {
        printf("\n%d",numbers[i]);
    }
}