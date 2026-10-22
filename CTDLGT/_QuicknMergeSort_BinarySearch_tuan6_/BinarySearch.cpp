#include <stdio.h>

int BS(int A[], int end, int x) {
    int start = 0;
    int step = 1;

    while (start <= end) {
        int k = start + (end - start) / 2;

        printf("B%i: A[start] = A[%i], A[end] = A[%i], mid = %i.\n",step, start, end, k);

        if (A[k] == x) {
            step++;
            printf("B%i: x = A[%i]\n", step, k);
            return k;
        }

        else if (x < A[k]) end = k - 1;
        else start = k + 1;

        step++;
    }

    return 0;
}

int main() {
    int A[] = { 13, 13, 23, 25, 36, 57, 59, 87, 89, 111, 121, 204 };
    int end = 11;
    int x;

    printf("Day ban dau: A = {13, 13, 23, 25, 36, 57, 59, 87, 89, 111, 121, 204}\n");
    printf("Nhap so can tim: x = ");
    scanf("%i", &x);

    BS(A, end, x);

    return 0;
}