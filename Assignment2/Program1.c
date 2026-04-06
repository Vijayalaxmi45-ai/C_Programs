/*Write a program to print unit digit of a given number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("enter a number:");
    scanf("%d",&no);
    int unit_digit=no%10;
    printf("unit digit of %d is %d",no,unit_digit);
    return 0;
}