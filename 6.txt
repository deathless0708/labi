#include <stdio.h>

void ShiftLeft3(double *A, double *B, double *C) {
    double t = *A;
    *A = *B;
    *B = *C;
    *C = t;
}

int main(void) {
    double A1, B1, C1, A2, B2, C2;

    scanf("%lf %lf %lf", &A1, &B1, &C1);
    scanf("%lf %lf %lf", &A2, &B2, &C2);

    ShiftLeft3(&A1, &B1, &C1);
    ShiftLeft3(&A2, &B2, &C2);

    printf("%g %g %g\n", A1, B1, C1);
    printf("%g %g %g\n", A2, B2, C2);

    return 0;
}
