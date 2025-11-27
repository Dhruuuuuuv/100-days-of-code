#include <stdio.h>

int main() {
    int n, original, remainder, digits = 0, i;
    int sum = 0, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    int temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0) {
        remainder = temp % 10;
        power = 1;
        for(i = 1; i <= digits; i++) {
            power *= remainder;
        }
        sum += power;
        temp /= 10;
    }

    if(sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is Not an Armstrong number\n", original);

    return 0;
}
