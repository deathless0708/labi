#include <stdio.h>
#include <math.h>

int main() {
    float a, b, g;

    printf("Введите два неотрицательных числа a и b: ");
    scanf("%f %f", &a, &b);

    if (a < 0 || b < 0) {
        printf("Ошибка: числа должны быть неотрицательными.\n");
        return 1;
    }

    g = sqrt(a * b);

    printf("Среднее геометрическое: %.2f\n", g);
    return 0;
}
