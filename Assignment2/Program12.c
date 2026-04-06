#include <stdio.h>

int main() {
    float inr, usd;

    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    usd = inr / 76.23;
    printf("Amount in USD = %.2f", usd);

    return 0;
}