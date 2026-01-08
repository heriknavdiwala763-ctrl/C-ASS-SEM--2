#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        fprintf(stderr, "Usage: provide two positive integers: rows cols\n");
        return 1;
    }

    int total = rows * cols;
    int *a = malloc(total * sizeof(int));
    int *b = malloc(total * sizeof(int));
    int *s = malloc(total * sizeof(int));
    if (!a || !b || !s) {
        fprintf(stderr, "Memory allocation failed\n");
        free(a); free(b); free(s);
        return 1;
    }

    for (int i = 0; i < total; ++i) {
        if (scanf("%d", &a[i]) != 1) {
            fprintf(stderr, "Failed to read matrix A\n");
            free(a); free(b); free(s);
            return 1;
        }
    }
    for (int i = 0; i < total; ++i) {
        if (scanf("%d", &b[i]) != 1) {
            fprintf(stderr, "Failed to read matrix B\n");
            free(a); free(b); free(s);
            return 1;
        }
    }

    for (int i = 0; i < total; ++i) s[i] = a[i] + b[i];

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (c) putchar(' ');
            printf("%d", s[r * cols + c]);
        }
        putchar('\n');
    }

    free(a); free(b); free(s);
    return 0;
}