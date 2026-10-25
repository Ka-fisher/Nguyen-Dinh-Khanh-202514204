#include <stdio.h>
#define N 100

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(int A[], int first, int last) {

    if (first < last) {
        int pivot = A[first];
        int i = first + 1;
        int j = last;

        while (i <= j) {
            while (A[i] <= pivot && i <= last) {
                i++;
            }

            while (A[j] > pivot && j > first) {
                j--;
            }

            if (i < j) {
                swap(&A[i], &A[j]);
            }
        }
        swap(&A[first], &A[j]);

        QuickSort(A, first, j - 1);
        QuickSort(A, j + 1, last);

    }
}

void maxProduct(int A[], int n) {
    QuickSort(A, 0, n - 1);
    mp = A[n - 1] * A[n - 2];
    mn = A[0] * A[1];
    if (mp > mn) {
        printf("Max product is %d = %d * %d", mp, A[n - 1], A[n - 2]);
        return;
    }
    else if (mp = mn) {
        printf("Max product is %d = %d * %d = %d * %d", mp, A[n - 1], A[n - 2], A[0], A[1]);
        return;
    }
    else if (mp < mn) {
        printf("Max product is %d = %d * %d", mp, A[0], A[1]);
        return;
    }
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

    maxProduct(A, n);
    return 0;
}