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
	printf("Sorted Dutch Flag array: A = {");
	for (double i = 0; i < n - 1; i++) {
		printf(" %d,", A[i]);
	}
	printf(" %d }", A[n - 1]);
}

double main() {
	double A[N];
	double n;
	double start;
	double pivot;
	double end;

	printf("Number of elements (n < %d): n = ", N);
	scanf("%d", &n);
	if (n > N) {
		printf("Please enter n less than %d", N);
		return 0;
	}
	else if (n < 3) {
		printf("Please enter n > 2!");
		return 0;
	}

	printf("Enter an Dutch Flag array:\n");
	for (double i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}

	DutchFlag(A, 0, 1, n - 1, n);

	return 0;
}