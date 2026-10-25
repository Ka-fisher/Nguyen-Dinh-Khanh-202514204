#include <stdio.h>
#define N 100

void merge(int A[], int As, int Ae, int Be) {
	int i = As;
	int j = ++Ae;
	while (i < j && j <= Be) {
		if (A[i] <= A[j]) i++;
		else {
			int x = A[j];
			for (int a = j; a > i; a--) A[a] = A[a - 1];
			A[i] = x;
			i++; j++;
		}
	}
	return;
}


void split(int A[], int start, int end) {
	if (start >= end) return;
	int mid = start + (end - start) / 2;

	split(A, start, mid);
	split(A, mid + 1, end);
	merge(A, start, mid, end);

	return;
}

void mergeSort(int A[], int start, int end) {
	split(A, start, end);

	printf("Sorted array:\n A = {");
	for (int i = start; i < end; i++) {
		printf(" %i,", A[i]);
	}
	printf(" %i}\n", A[end]);

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
	else if (n <= 0) {
		printf("Please enter an positive number!");
		return 0;
	}

	printf("Enter an array:\n");
	for (int i = 0; i < n; i++) {
		printf("A[%i] = ", i);
		scanf("%i", &A[i]);
	}

	mergeSort(A, 0, n - 1);

	return 0;
}