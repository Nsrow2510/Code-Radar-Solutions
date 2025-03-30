void isPrime(int n) {
    int count;
    for (int i = 1; i<=n; i++){
        if (n%i == 0) {
            count++;
        }
    } 
    if (count == 2) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
}