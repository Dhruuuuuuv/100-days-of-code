#include <stdio.h>

int main() {
    long binary, temp;
    int digit, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    temp = binary;

    while(temp != 0) {
        digit = temp % 10;
        if(digit == 0)
            digit = 1;
        else
            digit = 0;
        onesComplement += digit * place;
        place *= 10;
        temp /= 10;
    }

    printf("1's complement = %ld\n", onesComplement);

    return 0;
}

