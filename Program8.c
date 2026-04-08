/*Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>

int main()
{
    int cost_price, selling_price;

    printf("Enter Cost Price: ");
    scanf("%d", &cost_price);

    printf("Enter Selling Price: ");
    scanf("%d", &selling_price);

    if(selling_price > cost_price)
    {
        int profit = selling_price - cost_price;
        float profit_percent = (profit * 100.0) / cost_price;
        printf("Profit Percentage = %.2f%%", profit_percent);
    }
    else if(cost_price > selling_price)
    {
        int loss = cost_price - selling_price;
        float loss_percent = (loss * 100.0) / cost_price;
        printf("Loss Percentage = %.2f%%", loss_percent);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}