#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;

    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%llu\n", product);

    return 0;
}

