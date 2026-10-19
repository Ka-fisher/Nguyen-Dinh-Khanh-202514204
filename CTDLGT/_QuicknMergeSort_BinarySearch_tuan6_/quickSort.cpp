#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void InKQ(int B, int A[], int n) {
    printf("B%i: A = { ", B);
    for (int i = 0; i < n - 1; i++) {
        printf(" %i,", A[i]);
    }
    printf(" %i}\n", A[n - 1]);
}

void QuickSort(int A[], int first, int last, int *B) {
    int n = sizeof(A) / 4;

    if (first < last) {
        int pivot = A[first];
        int i = first + 1;
        int j = last;

        while (i < j) {
            while (A[i] <= pivot && i < last) {
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
        InKQ((*B)++, A, n);
        QuickSort(A, first, j - 1, B);
        QuickSort(A, j + 1, last, B);

    }
}

int main() {
    int A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 };
    int n = sizeof(A) / sizeof(A[0]);
    int* B = 1;

    printf("Ban dau: A ={");
    for (int i = 0; i < n; i++) {
        printf(" %i,", A[i]);
    }
    printf(" %i}\n", A[n - 1]);

    QuickSort(A, 0, n - 1, &B);

    printf("Mang sau khi sap xep:   ");
    for (int i = 0; i < n; i++) {
        printf("%i ", A[i]);
    }
    printf("\n");

    return 0;
}
