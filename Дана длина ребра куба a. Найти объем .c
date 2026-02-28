#include <stdio.h>
int main() {
    float a, V, S;

    printf("Введите длину ребра куба a: ");
    scanf("%f", &a);

    V = a * a * a;
    S = 6 * a * a;

    printf("Объем куба: %.2f\n", V);
    printf("Площадь поверхности куба: %.2f\n", S);
    return 0;
}
