/*Write a program to input a three-digit number and display the sum of the digits*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("Enter a three-digit number : ");
    scanf("%d",&no);
    int sum = (no % 10) + ((no / 10) % 10) + (no / 100);
    printf("Sum of digits = %d", sum);
    return 0;
}
   