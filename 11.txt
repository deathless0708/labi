#include <stdio.h>
#include <ctype.h>

int is_empty_line(const char *s) {
    // пустая, если все символы — пробельные (пробел, таб, \r, \n и т.п.)
    while (*s) {
        if (!isspace((unsigned char)*s)) return 0;
        s++;
    }
    return 1;
}

int main(void) {
    char in_name[256], out_name[256];
    scanf("%255s %255s", in_name, out_name);

    FILE *fin = fopen(in_name, "r");
    if (!fin) return 0;

    FILE *fout = fopen(out_name, "w");
    if (!fout) { fclose(fin); return 0; }

    char line[2048];

    while (fgets(line, sizeof(line), fin)) {
        if (!is_empty_line(line)) {
            fputs(line, fout);
        }
    }

    fclose(fin);
    fclose(fout);
    return 0;
}
