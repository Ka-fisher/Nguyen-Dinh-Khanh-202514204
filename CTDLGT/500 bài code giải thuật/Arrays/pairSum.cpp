#include <stdio.h>

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

void pairSum(int A[], int sum, int n) {
    int i = 0;
    int j = n;
    int B = 1;

    QuickSort(A, 0, n);
    printf("Step %i: Sorted arrays: A = {",B++);
    for (int i = 0; i < n - 1; i++) {
            printf(" %i,", A[i]);
        }
    printf(" %i }\n", A[n - 1]);

    while (i < j) {
        if (A[i] + A[j] == sum) {
            printf("Step %i: Pair found: (A[%i] = %i, A[%i]) = %i)\n",B++, i, A[i], j, A[j]);
            return;
        }
        else if (A[i] + A[j] < sum) {
            printf("Step %i: A[i] + A[j] = A[%i] + A[%i] = %i < %i\n",B++, i, j, A[i] + A[j], sum);
            i++;
        }
        else if (A[i] + A[j] > sum) {
            printf("Step %i: A[i] + A[j] = A[%i] + A[%i] = %i > %i\n",B++, i, j, A[i] + A[j], sum);
            j--;
        }
    }
    printf("Step %i: Pair not found\n", B++);
    return;
}
int main() {
    int A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 };
    int n = sizeof(A) / sizeof(A[0]) - 1;
    int sum;

    printf("A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 }\n");
    printf("Sum = ");
    scanf("%i", &sum);

    pairSum(A, sum, n);

    return 0;
}