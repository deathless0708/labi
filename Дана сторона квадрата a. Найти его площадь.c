#include <stdio.h>

int main() {
    float a, S;

    printf("Программа вычисляет площадь квадрата.\n");
    printf("Введите сторону квадрата a: ");
    scanf("%f", &a);

    S = a * a;

    printf("Площадь квадрата равна: %.2f\n", S);

    return 0;
}


