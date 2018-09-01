#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int var,i=0,n,max=0,min=0,c=0;
    cout<<"enter no of people giving the interview";
    cin>>n;
    int arr[100];
    for(i=0;i<n;i++)
    {
        var=rand()%11;
        arr[i]=var;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    cout<<"best person selected\n";
    cout<<max;
    int employee[5]={12,5,4,11,7};
    employee[2]=max;
    cout<<"\n replaced array of assistants\n";
    for(i=0;i<5;i++)
    {
        cout<<employee[i]<<" ";
    }

}
