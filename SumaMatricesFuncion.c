#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Kevin Calle Maquis Calle
void genmatriz(int n, int m);

int main()
{
    // Agregamos la funcion para que no nos de error al usar una funcion que nos brinde valores aleatorios
    srand(time(NULL));
    int n, m;
    // Inicializamos las variables y ponemos que el usuario meta los valores del tama;o de la matriz y leemos eso
    printf("Ingeres el numero de filas MATRIZ:\n");
    scanf("%d", &n);
    printf("Ingeres el numero de columnas MATRIZ:\n");
    scanf("%d", &m);
    genmatriz(n,m);
    return 0;
}
void genmatriz(int n, int m)
{
    int Matrix[n][m];
    int MatrixA[n][m];
    int MatrixB[n][m];
    printf("\nLA MATRIZ 1 ES:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            // Usamos la funcion donde nos seleccione numeros aleatorios de o al 100
            Matrix[i][j] = rand() % 100 + 1;
            printf("%d\t|\t ", Matrix[i][j]);
        }
    }
    printf("\nLA MATRIZ 2 ES:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            MatrixA[i][j] = rand() % 100 + 1;
            printf("%d\t|\t ", MatrixA[i][j]);
        }
    }
    printf("\nLA MATRIZ RESULTANTE ES:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            MatrixB[i][j] = Matrix[i][j] + MatrixA[i][j];
            printf("%d\t|\t ", MatrixB[i][j]);
        }
    }
}