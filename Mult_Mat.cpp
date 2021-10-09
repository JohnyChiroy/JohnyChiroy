#include "enca.h"

void main()
{
    system("color f1");
    int m, n, f, c, i, j, k;
    float A[100][100], B[100][100], C[100][100];
    pos(42,3); cout << "MULTIPLICADOR DE MATRICES JJM:)";
    pos(30,4); impr("***************************************************");
    cout << "\n";
    impr("\nIngrese el numero de Filas y Columnas de la Matriz A\n");
    guardar("%d", &m);
    guardar("%d", &n);
    impr("\n***************************************************\n");
    impr("\nIngrese el numero de Filas y Columnas de la Matriz B\n");
    guardar("%d", &f);
    guardar("%d", &c);
    impr("\n");
    if (n == f)
    {
        impr("\n*****************************************************\n");
        impr("Ingrese los valores X, Y de la Matriz A\n\n");
        //Ingreso
        for (i = 1; i <= m; i++)
            for (j = 1; j <= n; j++)
            {
                impr("A(%d,%d)= ", i, j);
                guardar("%f", &A[i][j]);
            }

        impr("\n");
        impr("\n***************************************************\n");
        impr("\nIngrese los valores X, Y de la Matriz B\n\n");
        for (i = 1; i <= f; i++)
            for (j = 1; j <= c; j++)
            {
                impr("B(%d,%d)= ", i, j);
                guardar("%f", &B[i][j]);
            }
        //Cálculo
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= c; j++)
            {
                C[i][j] = 0;
                for (k = 1; k <= n; k++)
                {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }
        impr("\n***************************************************\n");
        impr("\nEl resultado de la multiplicacion de las matrices A y B es:");
        //Presentación
        impr("\n=========================\n");
        for (i = 1; i <= m; i++)
            for (j = 1; j <= c; j++)
            {
                impr("C(%d,%d)=\t%4.2f\n", i, j, C[i][j]);
            }
        impr("==========================\n\n");
        impr("Fin de la Operacion, Gracias por usar el MULTIPLICADOR DE MATRICES JJM:) \n");

    }
    else
    {
        impr("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        impr("No se puede realizar la multiplicacion, porque las dimensiones de las matrices A\n");
        impr("y B no son compatibles. Por favor ingrese las dimensiones compatibles\n");
        impr("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

    }
    pause();
}
