#include "enca.h"

void main()
{
    system("color f1");
    int m, n, f, c, i, j, k;
    float A[100][100], B[100][100], C[100][100];
    pos(30, 2); impr("--------------------------------------------------");
    pos(42,3); cout << "MULTIPLICADOR DE MATRICES JJM :)"; 
    pos(30,4); impr("---------------------------------------------------");      
    cout << "\n";
    pos(10, 5); impr("\n ADVERTENCIA; EL VALOR DE LA FILA DE LA MATRIZ A DEBE SER IGUAL A LAS COLUMNA DE LA MATRIZ B \n");
    pos(0, 7); impr("\n ingrese el numero de columnas y filas de la matriz A \n");
    pos(4, 9); impr("\n Columnas \n");
    pos(2, 11); impr("[   ]");
    pos(4, 11); guardar("%d", &m);
    pos(0, 13); impr("\n Filas \n");
    pos(2, 15); impr("[   ]");
    pos(4, 15); guardar("%d", &n);

    pos(0, 16); impr("\n------------------------------------------> \n");
    pos(0, 17); impr("\n ingrese el numero de columnas y filas de la matriz B \n");
    pos(0, 20); impr("\n Columnas \n");
    pos(2, 22); impr("[   ]");
    pos(4, 22); guardar("%d", &f);
    pos(0, 24); impr("\n Filas \n");
    pos(2, 25); impr("[   ]");
    pos(4, 25); guardar("%d", &c);
    impr("\n");
    system("cls");

    if (n == f)
    {
        impr("\n----------------------------------------------------\n");
        impr("Ingrese los valores X, Y de la Matriz A\n\n");
        //Ingreso
        for (i = 1; i <= m; i++)
            for (j = 1; j <= n; j++)
            {
                impr("A(%d,%d)= ", i, j);
                guardar("%f", &A[i][j]);
            }

        impr("\n");
        impr("\n------------------------------------------------\n");
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
        impr("\n-------------------------------------------------------------\n");
        impr("\nEl resultado de la multiplicacion de las matrices A y B es:");
        //Presentación
        impr("\n=========================\n");
        for (i = 1; i <= m; i++)
            for (j = 1; j <= c; j++)
            {
                impr("C(%d,%d)=\t%4.2f\n", i, j, C[i][j]);
            }
        impr("==========================\n\n");
        impr("Fin de la Operacion, Gracias por usar el MULTIPLICADOR DE MATRICES JJM:) \n \n");
        system("pause");
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
