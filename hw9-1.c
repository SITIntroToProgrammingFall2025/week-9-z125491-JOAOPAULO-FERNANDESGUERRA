#include<stdio.h>
int main()
{

float a[2][2];
int i,j;
float det;

printf("enter the elements of the 2x2 matrix:\n");

for (i=0 ; i<2 ; i++)
{
    for (j=0 ; j<2 ; j++)
    {
        printf("enter element [%d][%d]: ", i, j);
        scanf("%f", &a[i][j]);
    }
}

printf("You entered\n");
for (i=0 ; i<2 ; i++)
{
    for (j=0 ; j<2 ; j++)
    {
        printf("%.0f ", a[i][j]);
    }
    printf("\n");
}

det = a[0][0] * a[1][1] - a[0][1] * a[1][0];

printf("Determinant is %f\n", det);

return 0;
}

