#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: \r");
    scanf("%d",&c);
    a>b && a>c? printf("a"):b>a && b>c? printf("b"):printf("c");


    return 0;
}