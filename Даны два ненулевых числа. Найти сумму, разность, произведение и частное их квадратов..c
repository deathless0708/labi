#include <stdio.h>
int main() {
    float a, b;
    float sum, diff, prod, quot;

    printf("Введите два ненулевых числа a и b: ");
    scanf("%f %f", &a, &b);

    if (a == 0 || b == 0) {
        printf("Ошибка: числа не должны быть равны нулю.\n");
        return 1;
    }

    sum = a*a + b*b;
    diff = a*a - b*b;
    prod = (a*a) * (b*b);
    quot = (a*a) / (b*b);

    printf("Сумма квадратов: %.2f\n", sum);
    printf("Разность квадратов: %.2f\n", diff);
    printf("Произведение квадратов: %.2f\n", prod);
    printf("Частное квадратов: %.2f\n", quot);
    return 0;
}
