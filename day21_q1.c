#include <stdio.h>

int main() {
    int n, num, first, last, digits = 0, temp, multiplier;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    last = n % 10;

    temp = n;
    while(temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    multiplier = 1;
    for(int i = 0; i < digits; i++)
        multiplier *= 10;

    n = last * multiplier + (num % multiplier - last) + first;
    printf("Number after swapping first and last digit = %d\n", n);

    return 0;
}


