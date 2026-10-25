#include <stdio.h>
#define N 100

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2ele(int A[], int n) {
    int w1 = -1;
    int w2;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            if (w1 == -1) {
                w1 = i;
                w2 = i + 1;
            }
            else {
                w2 = i + 1;
                break;
            }
        }
    }
    swap(&A[w1], &A[w2]);

    printf("Sorted array: A = {");
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

    swap2ele(A, n);

    return 0;
}