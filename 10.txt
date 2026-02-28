#include <stdio.h>

int main(void) {
    char name[256];
    scanf("%255s", name);

    FILE *f = fopen(name, "r");
    if (!f) {
        printf("0\n");
        return 0;
    }

    int x, prev;
    int series = 0;

    if (fscanf(f, "%d", &prev) == 1) {
        series = 1;
        while (fscanf(f, "%d", &x) == 1) {
            if (x != prev) series++;
            prev = x;
        }
    }

    fclose(f);
    printf("%d\n", series);
    return 0;
}
