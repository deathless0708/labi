#include <stdio.h>
int main() {
    float R, L, S;
    const float pi = 3.14;

    printf("Введите радиус R: ");
    scanf("%f", &R);

    L = 2 * pi * R;
    S = pi * R * R;

    printf("Длина окружности: %.2f\n", L);
    printf("Площадь круга: %.2f\n", S);
    return 0;
}
