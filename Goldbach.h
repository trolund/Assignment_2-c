#ifndef ASSIGNMENT_2_GOLDBACH_H
#define ASSIGNMENT_2_GOLDBACH_H

#endif //ASSIGNMENT_2_GOLDBACH_H

#define ARRAY_SIZE 40000;


int checkPrime(int num){
    int isPrime = 1;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int goldbach(int n) {

    int arraysize = ARRAY_SIZE;

    int primes [arraysize];

    //starts from 2 to filter out 0 and 1 from primes because neither is considered a prime
    long int arrayInt = 0;
    for (int i = 2; i <= arraysize; i++) {
        if (checkPrime(i)) {
            primes[arrayInt] = i;
            arrayInt++;
        }
    }

    //print
    printf("\nnumbers not prime: \n");

    int flag = 0;
    for (int i = 0; i < n; i++) {
        flag = 0;
        for (int x = 0; (x < arraysize) && x <= n; x++) {
            for (int y = 0; x < arraysize && y <= n; y++) {
                if (i == (primes[x] + primes[y])) {
                    flag = 1;

                }
            }
        }
        if (!flag){printf("%d \n", i);}
    }
}