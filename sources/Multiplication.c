#include <stdio.h>

void multiplication()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int count = 1;
    while (count <= 10) {
        int product = count * number;
        printf("Factor: %d, Product: %d\n", count, product);
        count++;
    }
}
