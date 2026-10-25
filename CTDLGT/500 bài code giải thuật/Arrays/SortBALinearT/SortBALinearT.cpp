#include <stdio.h>
#define N 100

void SortBAlinear(double A[], double n) {
	double dem0 = 0;
	for (double i = 0; i < n; i++) {
		if (A[i] == 0) dem0++;
		else if (A[i] != 1) {
			printf("Error input at A[%d]!\n", i);
			return;
		}
	}

		for (double i = 0; i < dem0; i++) A[i] = 0;
		for (double i =  dem0; i < n; i++) A[i] = 1;

	printf("Number of zeros: %d\n", dem0);
	printf("Sorted binary array: A = {");
	for (double i = 0; i < n - 1; i++) {
		printf(" %d,", A[i]);
	}
	printf(" %d }", A[n - 1]);

	return;
}

double main() {
	double A[N];
	double n;
	
	printf("Number of elements (n < %d): n = ", N);
	scanf("%d", &n);
	if (n > N) {
		printf("Please enter n less than %d", N);
		return 0;
	}
	else if (n <= 0) {
		printf("Please enter an positive number!");
		return 0;
	}

	printf("Enter an Binary array:\n");
	for (double i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}

	SortBAlinear(A, n);

	return 0;
}