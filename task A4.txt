#include <stdio.h>
#include <stdlib.h>
enum Category
{
    FOOD,DRINK,TOILETRIES,CLOTHING
};
union ProductInfo
{
    float floatVal;
    int intVal;
};
struct Product
{
    char arr[50];
    float price;
    int stock;
    enum Category category;
    union ProductInfo info;

};
void Print(struct Product P);

int main()
{
    struct Product arr[3]=
    {
        {"hoodie",500,100,CLOTHING,40}, {"pepsi",10,300,DRINK,70},{"domty",10,100,FOOD,40}
    };
    for(int i=0;i<3;i++) Print(arr[i]);

    return 0;
}
void Print(struct Product P)
{
    printf("Product Name: %s , Category: %d , Price: %f, stock: %d, Additional Info: %f\n",P.arr, P.category, P.price, P.stock, P.info.floatVal);
}

