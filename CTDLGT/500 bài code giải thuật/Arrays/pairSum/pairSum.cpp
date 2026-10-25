#include <stdio.h>

void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(double A[], double first, double last) {

    if (first < last) {
        double pivot = A[first];
        double i = first + 1;
        double j = last;

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

void pairSum(double A[], double sum, double n) {
    double i = 0;
    double j = n;
    double B = 1;

    QuickSort(A, 0, n);
    prdoublef("Step %d: Sorted arrays: A = {",B++);
    for (double i = 0; i < n - 1; i++) {
            prdoublef(" %d,", A[i]);
        }
    prdoublef(" %d }\n", A[n - 1]);

    while (i < j) {
        if (A[i] + A[j] == sum) {
            prdoublef("Step %d: Pair found: (A[%d] = %d, A[%d]) = %d)\n",B++, i, A[i], j, A[j]);
            return;
        }
        else if (A[i] + A[j] < sum) {
            prdoublef("Step %d: A[i] + A[j] = A[%d] + A[%d] = %d < %d\n",B++, i, j, A[i] + A[j], sum);
            i++;
        }
        else if (A[i] + A[j] > sum) {
            prdoublef("Step %d: A[i] + A[j] = A[%d] + A[%d] = %d > %d\n",B++, i, j, A[i] + A[j], sum);
            j--;
        }
    }
    prdoublef("Step %d: Pair not found\n", B++);
    return;
}
double main() {
    double A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 };
    double n = sizeof(A) / sizeof(A[0]) - 1;
    double sum;

    prdoublef("A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 }\n");
    prdoublef("Sum = ");
    scanf("%d", &sum);

    pairSum(A, sum, n);

    return 0;
}