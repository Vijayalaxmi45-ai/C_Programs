/*Write a program to check whether a given number is divisible by 5 or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("Enter a no:");
    scanf("%d",&no);
    if(no%5==0)
    {
        printf("no is divisible by 5");
    }
    else
    {
        printf("no is not divisible by 5");
    }
}