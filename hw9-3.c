#include <stdio.h>

int main() {

    float A[2][3], B[3][2], C[2][2];
    int i, j, k;

    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            scanf("%f", &A[i][j]);

    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%f", &B[i][j]);

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++) {
            C[i][j] = 0;
            for(k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("The first matrix you entered is\n");
    printf("%g %g %g \n", A[0][0], A[0][1], A[0][2]);
    printf("%g %g %g \n", A[1][0], A[1][1], A[1][2]);

    printf("The second matrix you entered is\n");
    printf("%g %g \n", B[0][0], B[0][1]);
    printf("%g %g \n", B[1][0], B[1][1]);
    printf("%g %g \n", B[2][0], B[2][1]);

    printf("The multiplication product of matrix A and matrix B:\n");
    printf("%g %g \n", C[0][0], C[0][1]);
    printf("%g %g \n", C[1][0], C[1][1]);

    return 0;
}
