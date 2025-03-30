#include <stdio.h>
void fibonacciSeries(int n) {
    int n;
    scanf("%d", &n);
    int a = 0, b = 1;
    for(int i =1; i<=n; i++) {
        int next = a+b;
        printf("%d", a);
        a = b;
        b = next;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if(n<=0) {
        printf("invalid Input\n");
        return 0;
    }

    fibonacciSeries(n);
    return 0;
}
