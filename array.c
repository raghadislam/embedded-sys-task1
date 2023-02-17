#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
        printf("%d\n",arr[i]);
    }
    printf("sum= %d\naverage= %d\n",sum,sum/5);

        return 0;
}