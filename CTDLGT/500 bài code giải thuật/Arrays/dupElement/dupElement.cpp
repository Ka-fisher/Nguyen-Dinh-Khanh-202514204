#include <stdio.h>
#define N 100

double findDup(double A[], double n) {
	double sum_t;
	double sum_r = 0;
	double dupElement;

	for (double i = 0; i < n; i++) sum_r += A[i];
	sum_t = n * (n - 1) / 2;

	dupElement = sum_r - sum_t;
	return dupElement;
 }

double main() {
	double A[N];
	double n;
	double dup;

	printf("Number of elements (n < %d): n = ", N);
	scanf("%d", &n);
	if (n > N) {
		printf("Please enter n less than %d", N);
		return 0;
	}
	else if (n < 2) {
		printf("Please enter n greater than 1");
		return 0;
	}

	printf("Enter an array:\n");
	for (double i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
		if (A[i] >= n || A[i] < 1) {
			printf("The element must between 0 and %d", n);
			return 0;
		}
	}
	

	dup = findDup(A, n);
	printf("The duplicate element is %d.", dup);

	return 0;
}