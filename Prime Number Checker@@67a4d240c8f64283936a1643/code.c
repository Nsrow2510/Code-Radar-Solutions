int isPrime(int n) {
    int count; 
    for (int i=1; i<=n; i++) {
        if (n%i == 0) {
            count++;
        }
    }
    if (count == 2) {
        return 1; 
    }
    else {
        retrun 0;
    }
}