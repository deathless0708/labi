#include <stdio.h>
#include <stdlib.h>

char* DecToHex(unsigned int n) {
    char digits[] = "0123456789ABCDEF";
    char tmp[40];
    int len = 0;

    if (n == 0) {
        char *s = (char*)malloc(2);
        s[0] = '0';
        s[1] = '\0';
        return s;
    }

    while (n > 0) {
        tmp[len++] = digits[n % 16];
        n /= 16;
    }

    char *res = (char*)malloc(len + 1);
    for (int i = 0; i < len; i++) {
        res[i] = tmp[len - 1 - i];
    }
    res[len] = '\0';
    return res;
}

int main(void) {
    unsigned int x;

    for (int i = 0; i < 5; i++) {
        scanf("%u", &x);
        char *h = DecToHex(x);
        printf("%s\n", h);
        free(h);
    }

    return 0;
}
