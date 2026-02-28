#include <stdio.h>
int main() {
    float a, b, c, V, S;

    printf("Введите длины ребер a, b и c: ");
    scanf("%f %f %f", &a, &b, &c);

    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);

    printf("Объем: %.2f\n", V);
    printf("Площадь поверхности: %.2f\n", S);
    return 0;
}
