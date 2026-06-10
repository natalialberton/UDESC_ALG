//
// Created by alber on 09/06/2026.
//
//Modifique o algoritmo anterior para torná-lo mais genérico. Declare as matrizes A e B
//como 6x6 (limite máximo para esse programa) e faça com que o usuário entre com o
//número de linhas e colunas que efetivamente A e B terão (que deve respeitar o limite).
//Depois, o usuário deve entrar com os dados de A e B (de acordo com o número de linhas
//e colunas definido). O programa então calcula a multiplicação entre A e B e armazena na
//matriz resultante C, com o seu número de linhas e colunas definido em função do
//tamanho de A e B. Por fim, mostrar a matriz C. Lembre-se de testar a compatibilidade
//entre as duas matrizes.

#include <windows.h>
#include <locale.h>
#include <stdio.h>

#define MAX 6

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int linA, colA, linB, colB;
    int i, j, k;

    printf("======== MULTIPLICAÇÃO DE MATRIZES ========\n\n");

    printf("--- Matriz A ---\n");
    do {
        printf("Digite o número de linhas de A (1 a %d): ", MAX);
        scanf("%d%*c", &linA);
    } while (linA < 1 || linA > MAX);

    do {
        printf("Digite o número de colunas de A (1 a %d): ", MAX);
        scanf("%d%*c", &colA);
    } while (colA < 1 || colA > MAX);

    printf("\n--- Matriz B ---\n");
    do {
        printf("Digite o número de linhas de B (1 a %d): ", MAX);
        scanf("%d%*c", &linB);
    } while (linB < 1 || linB > MAX);

    do {
        printf("Digite o número de colunas de B (1 a %d): ", MAX);
        scanf("%d%*c", &colB);
    } while (colB < 1 || colB > MAX);

    if (colA != linB) {
        printf("\nERRO: multiplicação impossível!\n");
        printf("Colunas de A (%d) ≠ Linhas de B (%d).\n", colA, linB);
        return 1;
    }

    printf("\n--- Elementos de A (%dx%d) ---\n", linA, colA);
    for (i = 0; i < linA; i++)
        for (j = 0; j < colA; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%f%*c", &a[i][j]);
        }

    printf("\n--- Elementos de B (%dx%d) ---\n", linB, colB);
    for (i = 0; i < linB; i++)
        for (j = 0; j < colB; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%f%*c", &b[i][j]);
        }

    for (i = 0; i < linA; i++)
        for (j = 0; j < colB; j++) {
            c[i][j] = 0;
            for (k = 0; k < colA; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("\n===== RESULTADO: C = A x B (%dx%d) =====\n", linA, colB);
    for (i = 0; i < linA; i++) {
        for (j = 0; j < colB; j++)
            printf("%.2f ", c[i][j]);
        printf("\n");
    }

    return 0;
}