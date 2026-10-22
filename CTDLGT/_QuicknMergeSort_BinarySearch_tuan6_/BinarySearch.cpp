#include <stdio.h>

int BS(int A[], int end, int x) {
    int start = 0;

    while (start <= end) {
        int k = start + (end - start) / 2;

        if (A[k] == x) return k;
        else if (x < A[k]) end = k - 1;
        else start = k + 1;
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

    int loc = BS(A, end, x);
    printf("x = A[%i]", loc);

    return 0;
}