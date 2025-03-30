void printPrimesInRange(int a, int b) {
    int count, foundPrime;
    for(int i=a; i<=b; i++) {
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
        else {
            foundPrime = 0;
        }
    }
    if (foundPrime == 0) {
        printf("No prime numbers");
    }
}