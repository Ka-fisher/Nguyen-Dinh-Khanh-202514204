#include <stdio.h>
#define N 100

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void DutchFlag(int A[], int start, int pivot, int end, int n) {
	int i = start;
	while (i <= end) {
		if (A[i] < pivot) swap(&A[i++], &A[start++]);
		else if (A[i] > pivot) swap(&A[i], &A[end--]);
		else i++;
	}
	printf("Sorted Dutch Flag array: A = {");
	for (int i = 0; i < n - 1; i++) {
		printf(" %i,", A[i]);
	}
	printf(" %i }", A[n - 1]);
}

int main() {
	int A[N];
	int n;
	int start;
	int pivot;
	int end;

	printf("Number of elements (n < %i): n = ", N);
	scanf("%i", &n);
	if (n > N) {
		printf("Please enter n less than %i", N);
		return 0;
	}
	else if (n < 3) {
		printf("Please enter n > 2!");
		return 0;
	}

	printf("Enter an Dutch Flag array:\n");
	for (int i = 0; i < n; i++) {
		printf("A[%i] = ", i);
		scanf("%i", &A[i]);
	}

	DutchFlag(A, 0, 1, n - 1, n);

	return 0;
}