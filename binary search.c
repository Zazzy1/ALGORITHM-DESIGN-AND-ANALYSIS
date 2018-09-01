#include <stdio.h>
#include <stdlib.h>
int bin_srch(int a[], int n, int key, int low, int high)
{
int mid;
if(low <= high)
{
mid = (low + high)/2;
if(a[mid] == key)
{
return mid;
}
else if(key < a[mid])
{
return bin_srch(a, n, key, low, mid-1);
}
else if(key > a[mid])
{
return bin_srch(a, n, key, mid+1, high);
}
}
else
{
return -1;
}
}
int main()
{
int a[10], n, key, low, mid, high, i, indx;
printf("\nEnter size of array: ");
scanf("%d", &n);
printf("\nEnter elements of array: ");
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
printf("\nEnter the key element to be searched: ");
scanf("%d", &key);
low = 0;
high = n-1;
indx = bin_srch(a, n, key, low, high);
if(indx == -1)
{
printf("\nSearch unsuccessful");
}
else
{
printf("\nElement found at position %d\n\n", indx+1);
}
}
