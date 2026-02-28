#include <stdio.h>

int main(void) {
    int n, i;
    double f = 1.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        f *= i;
    }

    printf("%g\n", f);
    return 0;
}
