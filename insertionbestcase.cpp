#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    ofstream myfile;
    ifstream myfile1;
    myfile1.open("result.txt");
    long int n=15000;
    int arr[n];
     int i;
    int x;
    int y;
    for(i=0;i<n;i++)
    {
        myfile1>>arr[i];
    }
    int temp;
    for(x=1;x<=n;x++)
    {
        for(y=x;y>=1;y--)
        {
            if(arr[y]<arr[y-1])
            {
                temp=arr[y];
                arr[y]=arr[y-1];
                arr[y-1]=temp;
            }
            else
            break;

        }
    }
    myfile1.close();
    myfile.open("result1.txt");
    int j;
     for(j=0;j<n;j++)
    {
        myfile<<arr[j]<<endl;
    }
    myfile.close();
    return 0;
}
