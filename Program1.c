/*Write a program to check whether a given number is positive or non-positive.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("Enter a Number :");
    scanf("%d",&no);
    if(no==0)
    {
        printf("Zero!!!");
    }
    else if(no>0)
    {
        printf("Positive!!!");
    }
    else
    {
        printf("Non-Positive!!!");
    }
}