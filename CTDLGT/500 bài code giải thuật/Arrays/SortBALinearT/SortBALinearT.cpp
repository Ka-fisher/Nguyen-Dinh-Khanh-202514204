#include <stdio.h>
#define N 100

void SortBAlinear(int A, int n) {
	int dem0 = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] == 0) dem0++;
		else if (A[i] = !0 || A[i] = !1) {
			printf("Eror input at A[%i]!", i);
			return;
		}
	}

	if (dem0++ > 0) {
		for (int i = 0; i < dem0; i++) {
			A[i] = 0;
			A[dem0 + i] = 1;
		}
	}
	printf("Number of zeros: %i", dem0);

	printf("Sorted binary array: A = {");
	for (int i = 0; i < n - 1; i++) {
		printf(" %i,", A[i]);
	}
	printf(" %i }", A[n - 1]);

	return;
}

int main() {
	int A[N];
	int n;
	
	printf("Number of elements (n < %i): n = ", N);
	scanf("%i", &n);
	if (n > N) {
		printf("Please enter n less than %i", N);
		return 0;
	}

	printf("Enter an Binary array:\n",);
	for (int i = 0; i < n; i++) {
		printf("A[%i] = ");
		scanf("%i", &A[i]);
	}

	SortBAlinear(A, n);

	return 0;
}