#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p;
    printf("\nEnter the values of m, n and p: ");
    scanf("%d %d %d", &m, &n, &p);

    int i, j, k;

    int **matrix1 = malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
        matrix1[i] = malloc(n * sizeof(int));

    printf("\nEnter %d numbers for Matrix 1:\n", m*n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);

    int **matrix2 = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        matrix2[i] = malloc(p * sizeof(int));

    printf("\nEnter %d numbers for Matrix 2:\n", n*p);
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &matrix2[i][j]);

    int **result = malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
        result[i] = malloc(p * sizeof(int));

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            result[i][j] = 0; 
            for (k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nResult Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    for (i = 0; i < m; i++) free(matrix1[i]);
    for (i = 0; i < n; i++) free(matrix2[i]);
    for (i = 0; i < m; i++) free(result[i]);

    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}

