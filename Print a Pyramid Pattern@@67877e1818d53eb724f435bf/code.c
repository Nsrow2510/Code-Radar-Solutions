#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=n; i>0; i--) {
        for (int j=1; j<=i+1; j++) {
            if (j%2!=0) {
                if (j==1) {
                    printf(" * ");
                }
                else {
                    printf("*");
                }
            }
        }
    }
    
    return 0;
}