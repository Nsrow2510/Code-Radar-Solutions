#include <stdio.h>
void fibonacciSeries(int n) {
    int x;
    scanf("%d", &x);
    int a = 0, b = 1, next;
    for(int i =1; i<=x; i++) {
        next = a+b;
        printf("%d", a);
        a = b;
        b = next;
    }
}
