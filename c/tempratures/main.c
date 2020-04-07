/**
 * From Section 1.2 of "The C Programming Language"
 */
#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main() {
    int fahr, celcius;

    fahr = LOWER;
    while (fahr <= UPPER) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr += STEP;
    }
}