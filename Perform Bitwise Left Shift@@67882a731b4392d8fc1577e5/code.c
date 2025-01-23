#include <stdio.h>

int main() {
    int a, shift, result;
    scanf("%d, %d %d", &a, &shift, &result);
    int result = a << shift;
    printf("%d", result);

    return 0;
}