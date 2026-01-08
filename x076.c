#include <stdio.h>
#include <stdlib.h>

/* Matrix addition program.

   Input (stdin):
	 r1 c1 r2 c2
	 <r1*c1 integers row-major for matrix A>
	 <r2*c2 integers row-major for matrix B>

   Requirements: r1 == r2 and c1 == c2. Prints the sum matrix (r1 x c1).
*/

int main(void) {
	int r1, c1, r2, c2;
	if (scanf("%d %d %d %d", &r1, &c1, &r2, &c2) != 4) {
		fprintf(stderr, "Expected four integers: r1 c1 r2 c2\n");
		return 1;
	}

	if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0) {
		fprintf(stderr, "Matrix dimensions must be positive\n");
		return 1;
	}

	if (r1 != r2 || c1 != c2) {
		fprintf(stderr, "Incompatible dimensions for addition: %d x %d and %d x %d\n", r1, c1, r2, c2);
		return 1;
	}

	long long size = (long long)r1 * c1;
	int *A = malloc(size * sizeof(int));
	int *B = malloc(size * sizeof(int));
	int *C = malloc(size * sizeof(int));
	if (!A || !B || !C) {
		fprintf(stderr, "Memory allocation failed\n");
		free(A); free(B); free(C);
		return 1;
	}

	for (long long i = 0; i < size; ++i) {
		if (scanf("%d", &A[i]) != 1) {
			fprintf(stderr, "Failed to read matrix A element %lld\n", i);
			free(A); free(B); free(C);
			return 1;
		}
	}
	for (long long i = 0; i < size; ++i) {
		if (scanf("%d", &B[i]) != 1) {
			fprintf(stderr, "Failed to read matrix B element %lld\n", i);
			free(A); free(B); free(C);
			return 1;
		}
	}

	for (long long i = 0; i < size; ++i) {
		long long s = (long long)A[i] + (long long)B[i];
		C[i] = (int)s;
	}

	for (int i = 0; i < r1; ++i) {
		for (int j = 0; j < c1; ++j) {
			if (j) putchar(' ');
			printf("%d", C[i * c1 + j]);
		}
		putchar('\n');
	}

	free(A); free(B); free(C);
	return 0;
}
