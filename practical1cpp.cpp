//Bubble sort 
#include<iostream>
using namespace std;
int main()
{
    int numbers[50],n,i,j,temp;
    cout<<"\nEnter the size of array::";
    cin>>n;
    cout<<"\nEnter the array elements::";
    for(i=0;i<n;i++)
    {
        cin>>numbers[i];
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
    cout<<"\narray of bubble sort.";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<numbers[i];
    }
    return 0;
}