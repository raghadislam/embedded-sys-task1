#include <stdio.h>
#include <stdlib.h>
int findLargest(int arr[], int n);
int main()
{
    int n;
    printf("enter the size:\n");
    scanf("%d",&n);
    int arr[1000];
    printf("enter elements:\n");

    for(int i=0;i<n;i++)
    {
     scanf("%d\n",&arr[i]);
    }
    printf("max element is %d\n",findLargest(arr,n));

    return 0;
}
int findLargest(int arr[], int n)
{
    int max = -10000000;
    for(int i=0;i<n;i++)
    {
     if(arr[i]>=max)
        max=arr[i];
    }

    return max;

}
