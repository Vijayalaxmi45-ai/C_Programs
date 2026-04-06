#include <stdio.h>

int main() {
    int num, last, result;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    last = num % 10;        // get last digit
    result = (last * 100) + (num / 10);

    printf("After rotation: %d", result);

    return 0;
}