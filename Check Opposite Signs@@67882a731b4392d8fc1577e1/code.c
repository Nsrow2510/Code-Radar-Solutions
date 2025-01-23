#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a == -a || b == -b) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}