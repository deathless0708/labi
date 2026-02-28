#include <stdio.h>

void ArrayToMatrRow(const double A[], int K, int M, int N, double B[][100]) {
    int i, j;
    int idx = 0;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (idx < K) B[i][j] = A[idx++];
            else B[i][j] = 0.0;
        }
    }
}

int main(void) {
    int K, M, N, i, j;

    scanf("%d", &K);
    double A[10000];
    for (i = 0; i < K; i++) scanf("%lf", &A[i]);

    scanf("%d %d", &M, &N);

    double B[100][100];  // ограничение для простоты
    ArrayToMatrRow(A, K, M, N, B);

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%g", B[i][j]);
            if (j + 1 < N) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
