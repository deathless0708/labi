#include <stdio.h>

int IsPalindrom(int k) {
    int x = k;
    int rev = 0;

    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return (rev == k);
}

int main(void) {
    int i, x, cnt = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &x);
        if (x > 0 && IsPalindrom(x)) cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
