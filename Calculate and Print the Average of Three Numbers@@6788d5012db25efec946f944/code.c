#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int sum;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sum = a+b+c;
    printf("Average: %.2f", sum/3.0);

    return 0;
}