#include<stdio.h>
#include<conio.h>
int main()
{
    int no1,no2;
    printf("Enter two numbers :");
    scanf("%d%d",&no1,&no2);
    no1 = no1+no2;
    no2 = no1-no2;
    no1 = no1-no2;
    printf("After swapping : %d %d",no1,no2);
    return 0;
}