#include <stdio.h>
#include <stdlib.h>

int IterativeBinarySearch(int a[],int start,int end,int element)
{
    int mid;
    while(start <= end)
    {
        mid=(start+end)/2;
        if(a[mid] == element)
        {
            return mid;
        }
        else if(a[mid] < element)
        {
           start=mid+1;
        }
        else
            end=mid-1;
    }
    return -1;
}
int RecursiveBinarySearch(int a[],int start,int end,int element)
{
    int mid;
    if(start <= end)
    {
        mid=(start+end)/2;
        if(a[mid] == element)
         {
            return mid;
         }
        else if(a[mid] < element)
              return RecursiveBinarySearch(a,mid+1,end,element);
        else
              return RecursiveBinarySearch(a,start,mid-1,element);
    }
    return -1;
}
void get_data(int a[],int n)
{
    for(int i=0; i<n ;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int a[50],n,element,loc;
    printf("Enter the size of array should be less than 50:");
    scanf("%d",&n);
    printf("\nEnter the array elements:\n");
    get_data(a,n);
    printf("\nEnter the element that u want to search:");
    scanf("%d",&element);
    loc=IterativeBinarySearch(a,0,n-1,element);
    if(loc >= 0)
       {
           printf("\n Element is present at position %d\n",loc+1);
       }
    else
           printf("\n Element is not available");


    return 0;
}
