#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class sort1
{
    public:
    void quicksort(int a[],int p1,int r)
    {
        if(p1<r)
        {
            int q=partition1(a,p1,r);
            quicksort(a,p1,q-1);
            quicksort(a,q+1,r);
        }

    }
    int partition1(int a[],int p,int r)
    {
        int x=a[r];
        int i=p-1;
        int j;
        int temp1;
        int temp;
        for(j=p;j<=(r-1);j++)
        {
            if(a[j]<=x)
            {
                i=i+1;
                if(i!=j)
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
            }

        }
        if((i+1)!=r)
        {
        temp1=a[i+1];
        a[i+1]=a[r];
        a[r]=temp1;
        }
        int l=(i+1);
        return l;
    }
};
int main()
{
    ofstream myfile;
    ifstream myfile1;
    myfile.open("testcase.txt");
    myfile1.open("testcase.txt");
    int t1;
    long int n=10;
    for(t1=1;t1<=n;t1++)
    {
      int n1=rand();
     myfile<<n1<<endl;
    }
    int arr[n];
    int y;
    for(y=0;y<n;y++)
    {
        myfile1>>arr[y];
    }
    myfile.close();
    sort1 t;
    t.quicksort(arr,0,n-1);
    myfile.open("result.txt");
    for(y=0;y<n;y++)
    {
        myfile<<arr[y]<<endl;
    }
    myfile.close();
    return 0;

}

