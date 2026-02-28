#include <stdio.h>
#include <math.h>

int main(void) {
    double x1, x2;
    scanf("%lf %lf", &x1, &x2);

    printf("%g\n", fabs(x2 - x1));
    return 0;
}

