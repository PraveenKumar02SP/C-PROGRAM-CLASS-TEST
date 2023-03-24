#include <stdio.h>

int main() {
    int M, N;
    printf("Enter the number of rows (M) and columns (N) of the matrices: ");
    scanf("%d %d", &M, &N);

    int A[M][N], B[M][N], C[M][N];
    int i, j;

    printf("\nEnter the elements of matrix A:\n");
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter the elements of matrix B:\n");
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nSum of the matrices A and B:\n");
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
output:
Enter the number of rows (M) and columns (N) of the matrices: 3 3

Enter the elements of matrix A:
1 2 3
4 5 6
7 8 9

Enter the elements of matrix B:
9 8 7
6 5 4
3 2 1

Sum of the matrices A and B:
10 10 10
10 10 10
10 10 10