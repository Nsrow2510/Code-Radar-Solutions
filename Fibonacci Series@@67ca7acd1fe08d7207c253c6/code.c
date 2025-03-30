#include <stdio.h>
void fibonacciSeries(int n) {
    int x;
    scanf("%d", &x);
    int a = 0, b = 1, next;
    for(int i =1; i<=x; i++) {
        printf("%d", a);
        next = a+b;
        a = b;
        b = next;
    }
}
