#include <stdio.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    float amountFactor = 1; 

    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100;

    float r = 1 + rate / 100;

    for(int i = 0; i < time; i++) {
        amountFactor = amountFactor * r;
    }

    compoundInterest = principal * amountFactor - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
