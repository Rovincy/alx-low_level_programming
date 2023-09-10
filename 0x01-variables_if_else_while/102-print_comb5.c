#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c, d, e, f = 0;

    while (f < 10) {
        e = 0;
        while (e < 10) {
            d = 0;
            while (d < 10) {
                c = 0;
                while (c < 10) {
                    if (!(f == c && e == d && f == d)) {
                        putchar('0' + f);
                        putchar('0' + e);
                        putchar(' ');
                        putchar('0' + d);
                        putchar('0' + c);
                        if (!(f == 9 && e == 8 && d == 9 && c == 8)) {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                    c++;
                }
                d++;
            }
            e++;
        }
        f++;
    }
    putchar('\n');
    return (0);
}

