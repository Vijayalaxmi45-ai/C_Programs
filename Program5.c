/*Write a program to print greater between two numbers. Print one number of both are the same*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int no1,no2;
    printf("Enter two numbers :");
    scanf("%d %d",&no1,&no2);
    if(no1>no2)
    {
        printf("%d",no1);
    }
    else if(no1==no2)
    {
        printf("%d",no1);
    }
    else
    {
        printf("%d",no2);
    }
    return 0;
}