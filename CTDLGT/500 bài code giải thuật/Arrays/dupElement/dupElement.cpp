#include <stdio.h>
#define N 100

int findDup(int A[], int n) {
	int sum_t;
	int sum_r = 0;
	int dupElement;

	for (int i = 0; i < n; i++) sum_r += A[i];
	sum_t = n * (n - 1) / 2;

	dupElement = sum_r - sum_t;
	return dupElement;
 }

int main() {
	int A[N];
	int n;
	int dup;

	printf("Number of elements (n < %i): n = ", N);
	scanf("%i", &n);
	if (n > N) {
		printf("Please enter n less than %i", N);
		return 0;
	}
	else if (n < 2) {
		printf("Please enter n greater than 1");
		return 0;
	}

	printf("Enter an array:\n");
	for (int i = 0; i < n; i++) {
		printf("A[%i] = ", i);
		scanf("%i", &A[i]);
		if (A[i] >= n || A[i] < 1) {
			printf("The element must between 0 and %i", n);
			return 0;
		}
	}
	

	dup = findDup(A, n);
	printf("The duplicate element is %i.", dup);

	return 0;
}