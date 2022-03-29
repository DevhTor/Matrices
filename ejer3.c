// 3.  Hacer un programa en C para calcular el promedio de todos los elementos pares en la digonal principal 
// de una matriz cuadrada a[i][j] de orden N.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;

    printf("Ingrese el orden de la matriz: ");
    scanf("%d", &N);

    int a[N][N];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("Ingrese el valor de la posicion [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int suma = 0;
    int cont = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == j && a[i][j] % 2 == 0)
            {
                suma += a[i][j];
                cont++;
            }
        }
    }

    printf("El promedio de los elementos pares en la diagonal principal es: %d", suma / cont);


    return 0;
}
