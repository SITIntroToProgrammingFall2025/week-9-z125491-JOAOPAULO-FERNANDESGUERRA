#include <stdio.h>

int main() {

    float A[3][2], B[2][3], C[3][2];
    int i, j, k;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%f", &B[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = 0;
            for(k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The first matrix you entered is\n");
    printf("%g %g %g\n", A[0][0], A[0][1], A[0][2]);
}

