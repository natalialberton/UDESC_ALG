//
// Created by alber on 09/06/2026.
//
//Escreva um algoritmo que leia uma matriz M(5x5), e crie 2 vetores SL(5), SC(5) que
//contenham respectivamente as somas das linhas e das colunas de M. Por fim, exiba a
//matriz e os vetores criados.

#include <windows.h>
#include <locale.h>
#include <stdio.h>

#define N 5

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float m[N][N], sl[N], sc[N];
    int i, j;

    printf("======== MATRIZ M (%dx%d) ========\n", N, N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            printf("M[%d][%d]: ", i + 1, j + 1);
            scanf("%f%*c", &m[i][j]);
        }

    for (i = 0; i < N; i++) {
        sl[i] = 0;
        sc[i] = 0;
        for (j = 0; j < N; j++) {
            sl[i] += m[i][j];
            sc[i] += m[j][i];
        }
    }

    printf("\n============ RESULTADO ============\n");
    printf("\nMatriz M:\n\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%.2f ", m[i][j]);
        printf("\n");
    }

    printf("\nSL | Soma das linhas:\n");
    for (i = 0; i < N; i++) {
        printf("  SL[%d] (linha %d): %.2f\n", i + 1, i + 1, sl[i]);
    }

    printf("\nSC | Soma das colunas:\n");
    for (i = 0; i < N; i++) {
        printf("  SC[%d] (coluna %d): %.2f\n", i + 1, i + 1, sc[i]);
    }

    return 0;
}