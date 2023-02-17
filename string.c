#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr1[50];
    char arr2[50];
    char arr3[100];
    printf("enter the first string\n");
    gets(arr1);
    printf("enter the second string\n");
    gets(arr2);
    strcpy(arr3,arr1);
    strcat(arr3,arr2);
    printf("string after concatenation:\n");

    printf("%s",arr3);



        return 0;
}