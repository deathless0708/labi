#include <stdio.h>
int main() {
    float a, b, avg;

    printf("Введите два числа a и b: ");
    scanf("%f %f", &a, &b);

    avg = (a + b) / 2;

    printf("Среднее арифметическое: %.2f\n", avg);
    return 0;
}