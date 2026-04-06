#include <stdio.h>

int main() {
    int num, position = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        if (num % 2 == 1) {
            printf("Position of first 1 from LSB: %d", position);
            break;
        }
        num = num / 2;
        position++;
    }

    return 0;
}