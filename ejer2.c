// 2. Hacer un programa en C que calcule el producto escalar
// entre los elementos de la primera fila y los de la ultima
// columna de una matriz a[i][j] Cuadrada de orden N.

#include <stdio.h>

int N;

int main(int argc, char const *argv[])
{
    printf("Escribe N: ");
    scanf("%d", &N);

    int a[N][N];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("Escribe el valor de a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int suma = 0;

    for (int i = 1; i <= N; i++)
    {
        suma += a[1][i] * a[i][N];
    }

    printf("El producto escalar es: %d", suma);


    return 0;
}
