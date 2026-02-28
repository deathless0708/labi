#include <stdio.h>

int main(void) {
    int n, i, last = 0;
    scanf("%d", &n);

    int a[100000];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            last = i + 1; // делаем 1-based номер
        }
    }

    printf("%d\n", last);
    return 0;
}
