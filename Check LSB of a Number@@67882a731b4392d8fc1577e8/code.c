#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("The Least Significant Bit (LSB) is 1.\n");
    } else {
        printf("The Least Significant Bit (LSB) is 0.\n");
    }

    return 0;
}
