/*WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar”*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[50];
    printf("Enter Your Name :");
    gets(name);
    printf("\"Hello , %s \"",name);
    return 0;
}