/*Write a program to check whether a given number is a three-digit number or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    if(no>99 && no<1000)
    {
        printf("Three digit number!!!");
    }
    else
    {
        printf("Not a three digit number!!!");
    }
}