#include <stdio.h>
#include "Goldbach.h"

int *arrayPointer;
int naturalNumArray[50];

int main() {

    int input;
   // char c;
    int numberOfOdd = 0;
    int numberOfEven = 0;
    int evenSum = 0;
    int oddSum = 0;

    int firstNatrualBool = 1;
    int firstNatrual =0;

    arrayPointer = naturalNumArray;

    printf("Enter 0 to exit \n\n");

    do { // få et nyt input indtil at man indtaster 0
            printf("Enter any number: \n");

        scanf("%d", &input); // får input og lægger det i input var

        if(input != 0) {
            if (input % 2 == 0) {
                numberOfEven++;
                evenSum = evenSum + input;
            } else {
                numberOfOdd++;
                oddSum = oddSum + input;

            }

            if(input >= 0){
                *arrayPointer = input;
                arrayPointer++;

                if(firstNatrualBool) {
                    firstNatrual = input;
                    firstNatrualBool = 0;
                }
            }
        }

    }while (input != 0);

    printf("\nstatus: \n");
    printf("Odd numbers occured: %i \n", numberOfOdd);
    printf("Even numbers occured: %i \n", numberOfEven);
    printf("Odd average: %d \n", oddSum/numberOfOdd);
    printf("Even average: %d \n", evenSum/numberOfEven);
    printf("First natural number was: %d \n", firstNatrual);

    goldbach(firstNatrual);

    return 0;
}



