//selection sort
#include<stdio.h>
int main()
{
    int i,j,n,temp,min,a[30],loc;
    printf("\nenter number of elements::");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter element::");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    printf("\nsorted list.");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}