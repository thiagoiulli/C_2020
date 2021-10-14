#include <stdio.h>

int main() {
    char o;
    float m[12][12];
    float total = 0, quantidade = 0;
    scanf("%c\n", &o);
    int i, j;
    for (i = 0; i < 12; ++i) {
        for (j = 0; j < 12; ++j) {
            scanf("%f", &m[i][j]);
        }
    }
    for (i = 0; i < 11; ++i) {
        for (j = 11; j >= i+1; --j) {
            total += m[i][j];
            quantidade++;
        }
    }

    if (o == 'S') {
        printf("%.1f\n", total);
    } else if (o == 'M') {
        printf("%.1f\n", total / quantidade);
    }
    return 0;
}