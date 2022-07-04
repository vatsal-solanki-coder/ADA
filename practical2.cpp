//Insertion sort
#include<iostream>
using namespace std;
int main()
{
    int i,j,count,temp,number[25];
    cout<<"\nnumber od elements";
    cin>>count;
    cout<<"\nenter element";
    for(i=0;i<count;i++)
    {
        cin>>number[i];
    }
    for(i=1;i<count;i++)
    {
        temp=number[i];
        j=i-1;
        while(temp<number[j] && j>=0)
        {
            number[j+1]=number[j];
            j=j-1;
        }
        number[j+1]=temp;
    }
    cout<<"\norder list";
    for(i=0;i<count;i++)
    {
        cout<<"\n"<<number[i];
    }
    return 0;
}