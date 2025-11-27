#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1, j = 1; i <= n; i++, j += 2) {
        sum += (double)j / (j + 1);
    }

    printf("Sum of series = %.2lf\n", sum);

    return 0;
}  
