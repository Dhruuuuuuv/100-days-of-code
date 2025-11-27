#include <stdio.h>

int main() {
    int i, j;

    printf("Enter the number of rows: ");
    int n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
