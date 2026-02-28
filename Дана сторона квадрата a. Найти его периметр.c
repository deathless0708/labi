#include <stdio.h>

int main() {
    float a, P;

    printf("Программа вычисляет периметр квадрата.\n");
    printf("Введите сторону квадрата a: ");
    scanf("%f", &a);

    P = 4 * a;

    printf("Периметр квадрата равен: %.2f\n", P);

    return 0;
}

