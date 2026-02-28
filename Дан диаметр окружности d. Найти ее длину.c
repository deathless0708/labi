#include <stdio.h>
int main() {
    float d, L;
    const float pi = 3.14;

    printf("Введите диаметр окружности d: ");
    scanf("%f", &d);

    L = pi * d;

    printf("Длина окружности: %.2f\n", L);
    return 0;
}

