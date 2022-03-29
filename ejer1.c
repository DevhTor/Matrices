// 1.   Hacer un programa en C que calcule la matriz producto 
// de dos matrices a[i][j] y b[i][j] de orden M x N.

#include <stdio.h>



int main(int argc, char const *argv[])
{   
    int M = 1;
    int N = 1;

    printf("Escribe M: ");
    scanf("%d", &M);

    printf("Escribe N: ");
    scanf("%d", &N);

    int a[M][N];
    int b[M][N];

    int c[M][N];

    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("Escribe el valor de a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("Escribe el valor de b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            
        }
    }

    printf("\n");

    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}
