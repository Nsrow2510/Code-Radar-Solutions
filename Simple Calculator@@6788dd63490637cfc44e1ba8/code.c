#include <stdio.h>

int main() {
    int a, b;
    char o;
    scanf("%d %d", &a, &b);
    scanf(" %c", &o);
    if (o == '+') {
        printf("%d", a + b);
    } else if (o == '-') {
        printf("%d", a - b);        
    } else if (o == '/') {
        if (b != 0) {
            printf("%d", a / b);
        } else {
            printf("error");
        }
    } else if (o == '*'){
        printf("%d", a*b);
    }
    return 0;
}