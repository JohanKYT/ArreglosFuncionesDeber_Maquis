#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void genmatriz(int n, int m, int numMatrices);
int main()
{
    // Definimos las variables del numero de matrices y las dimeciones de las mismas
    int numMatrices, n, m;
    printf("Ingrese el numero de matrices: ");
    scanf("%d", &numMatrices);
    // Escaneamos el numero de matrices
    printf("Ingrese el numero de filas para la matriz: ");
    scanf("%d", &n);
    // Escaneamos el numero de filas de las matrices
    printf("Ingrese el numero de columnas para la matriz: ");
    scanf("%d", &m);
    // Escaneamos el numero de filas de las matrices
    genmatriz(n,m,numMatrices);
    return 0;
}
void genmatriz(int n, int m, int numMatrices)
{
    int ArreMulti[n][m][numMatrices];

    for (int k = 0; k < numMatrices; k++)
    {
        printf("\nMatriz %d:\n", k + 1);
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            for (int j = 0; j < m; j++)
            {
                if (k == numMatrices - 1)
                {
                    ArreMulti[i][j][k] = 1; //Ponemos que si son antes de la ultima la matrices este llena de 0
                }
                else
                {
                    ArreMulti[i][j][k] = 0; //Ponemos que si es la ultima la matricz este la llena de 1
                }
                printf("%d\t", ArreMulti[i][j][k]);
            }
        }
        printf("\n");
    }

    return 0;
}
