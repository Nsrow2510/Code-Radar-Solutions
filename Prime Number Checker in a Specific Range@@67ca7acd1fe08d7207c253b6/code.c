void printPrimesInRange(int a, int b) {
    int foundPrime;
    for(int i=a; i<=b; i++) {
        int count = 0;
        for(int j=1; j<=i; j++) {
            if(i%j == 0) {
                count++;
            } else {
                count += 0;
            }
        }
        if (count == 2) {
            printf("%d ", i);
            foundPrime = 1;
        }
    }
    if (foundPrime != 1) {
        printf("No prime numbers");
    }
}