/*
📌 Problem: Fizz Buzz

Given an integer n, generate an array of strings such that:

For each number i from 1 to n:
If i is divisible by both 3 and 5, store "FizzBuzz"
If i is divisible by 3, store "Fizz"
If i is divisible by 5, store "Buzz"
Otherwise, store the string value of i
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter value of N :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%5==0 && i%3==0)
        {
            printf("FizzBuzz \n");
        }
        else if(i%3==0)
        {
            printf("Fizz \n");
        }
        else if(i%5==0)
        {
            printf("Buzz \n");
        }
        else 
        {
            printf("%d \n",i);
        }
    }
    return 0;
}
