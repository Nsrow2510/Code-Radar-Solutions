int isPrime(int n) {
    int count = 0; 
    for (int i=1; i<=n; i++) {
        if (n%i == 0) {
            count++;
        }
    }
    if (count == 2) {
        return 1; 
    }
    else {
        return 0;
    }
}