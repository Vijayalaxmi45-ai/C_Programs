/*Write a program to print a given number without its last digit.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("Enter A number :");
    scanf("%d",&no);
    int last_digit = no/10;
    printf("Number without last digit of %d is %d",no,last_digit);
    return 0;
}