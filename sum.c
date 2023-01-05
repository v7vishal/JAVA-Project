#include<stdio.h>

void main()
{
    int a,b,sum1,sum2;
    printf("Enter the 1st number to be added");
    scanf("%d",&a);
    printf("Enter the 2nd number to be added");
    scanf("%d",&b);
    sum1 = a+b;
    // substraction
    sum2 = a-b;
    printf("sum is %d",sum1);
    printf("sum is %d",sum2);
}