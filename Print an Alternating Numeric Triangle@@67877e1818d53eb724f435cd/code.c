#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int num=0;
    for(int i=1; i<=n; i++) {
        if(i%2==0) {
            printf("%d ", num);
        } else {
            printf("%d ", 1);
        }
        for(int j=1; j<=i; j++) {
            printf("%d", num);
            num = num--;
        }
        printf("\n");
    }

    return 0;
}