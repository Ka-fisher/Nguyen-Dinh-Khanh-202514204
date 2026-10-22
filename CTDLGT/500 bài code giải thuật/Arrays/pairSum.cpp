#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(int A[], int first, int last, int n, int* B) {

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

        QuickSort(A, first, j - 1, n, B);
        QuickSort(A, j + 1, last, n, B);

    }
}

int main() {

    return 0;
}
