#include <stdio.h>

int main() {
    int A[100][100], B[100][100], result[100][100];
    int m, n, p, i, j, k;

    // input matrix A
    printf("Enter the number of rows and columns of matrix A:\n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // input matrix B
    printf("Enter the number of rows and columns of matrix B:\n");
    scanf("%d %d", &n, &p);
    printf("Enter the elements of matrix B:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // multiply matrix A and matrix B
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            result[i][j] = 0;
            for(k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // print the result
    printf("Resultant matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
output:
matrix A
1 1
2 2
matrix B
1 1
2 2
resultant matrix
3 3
6 6