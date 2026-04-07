/*Write a program to check whether a given number is an even number or an odd number without using % operator.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("Enter a no:");
    scanf("%d",&no);
    if((no/2)*2==no)
    {
        printf("Even Number!!!");
    }
    else
    {
        printf("Odd Number!!!");
    }
}