#include <stdio.h>
#include<stdlib.h>
void ShellSort(int [],int);
int main()
{
    int a[30],n;
    printf("Enter the size of array that should be less than 30: ");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ShellSort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void ShellSort(int A[],int n)
{
    int gap,i,j,temp;

    for(gap=n/2;gap>=1;gap/=2)
    {
    for(i=gap;i<n;i++)
    {
        temp=A[i];
        j=i-gap;
 while(j>=0 && A[j]>temp)
    {
        A[j+gap]=A[j];
        j=j-gap;
    }
        A[j+gap]=temp;

    }
 }

}
