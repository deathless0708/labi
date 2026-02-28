#include <stdio.h>

int main(void) {
    int m, n, i, j;
    scanf("%d %d", &m, &n);

    int a[200][200];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int count = 0;

    for (j = 0; j < n; j++) {
        int ok = 1;
        for (i = 0; i < m - 1; i++) {
            if (a[i][j] < a[i + 1][j]) {
                ok = 0;
                break;
            }
        }
        if (ok) count++;
    }

    printf("%d\n", count);
    return 0;
}
