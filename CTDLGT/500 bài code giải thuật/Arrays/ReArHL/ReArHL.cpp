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

void rearhl(int A[], int n) {
    QuickSort(A, 0, n - 1);
    printf("Sorted array: A = {");
    for (int i = 0; i < n - 1; i++) {
        printf(" %i,", A[i]);
    }
    printf(" %i }\n", A[n - 1]);

    for (int i = 1; i < n; i = i + 2) {
        swap(&A[i], &A[i + 1]);
    }
    printf("Rearrange array: A = {");
    for (int i = 0; i < n - 1; i++) {
        printf(" %i,", A[i]);
    }
    printf(" %i }", A[n - 1]);

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
    else if (n < 2) {
        printf("Please enter n > 1");
        return 0;
    }

    printf("Enter an array:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }

    rearhl(A, n);

    return 0;
}