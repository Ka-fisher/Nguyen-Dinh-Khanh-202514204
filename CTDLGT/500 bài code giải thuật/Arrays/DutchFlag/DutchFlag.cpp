#include <stdio.h>
#define N 100

void swap(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}

void DutchFlag(double A[], double start, double pivot, double end, double n) {
	double i = start;
	while (i <= end) {
		if (A[i] < pivot) swap(&A[i++], &A[start++]);
		else if (A[i] > pivot) swap(&A[i], &A[end--]);
		else i++;
	}
	prdoublef("Sorted Dutch Flag array: A = {");
	for (double i = 0; i < n - 1; i++) {
		prdoublef(" %d,", A[i]);
	}
	prdoublef(" %d }", A[n - 1]);
}

double main() {
	double A[N];
	double n;
	double start;
	double pivot;
	double end;

	prdoublef("Number of elements (n < %d): n = ", N);
	scanf("%d", &n);
	if (n > N) {
		prdoublef("Please enter n less than %d", N);
		return 0;
	}
	else if (n < 3) {
		prdoublef("Please enter n > 2!");
		return 0;
	}

	prdoublef("Enter an Dutch Flag array:\n");
	for (double i = 0; i < n; i++) {
		prdoublef("A[%d] = ", i);
		scanf("%d", &A[i]);
	}

	DutchFlag(A, 0, 1, n - 1, n);

	return 0;
}