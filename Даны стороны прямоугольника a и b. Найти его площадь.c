#include <stdio.h>

int main() {
    float a, b, S, P;

    printf("Программа вычисляет площадь и периметр прямоугольника.\n");
    printf("Введите длину стороны a: ");
    scanf("%f", &a);

    printf("Введите ширину стороны b: ");
    scanf("%f", &b);

    S = a * b;
    P = 2 * (a + b);

    printf("Площадь прямоугольника: %.2f\n", S);
    printf("Периметр прямоугольника: %.2f\n", P);

    return 0;
}


