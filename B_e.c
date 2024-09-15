#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result, n;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++) {
        originalNum = num;
        result = 0;
        n = 0;

        // Calculate the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Calculate if the number is an Armstrong number
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // Check and print if it's an Armstrong number
        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
