//
// Created by alber on 02/06/2026.
//
//Faça um algoritmo que gere os N primeiros elementos da série de Fibonacci,
//armazene-os num vetor, e por fim mostre a série gerada. Nessa série, os dois primeiros
//elementos são 1 e 1. A partir do terceiro, os elementos são gerados a partir da soma
//dos dois anteriores. Por exemplo, numa série com N = 9, temos: (1, 1, 2, 3, 5, 8, 13,
//21, 34). Defina um vetor com capacidade 50 e garanta que o usuário não entre com N > 50.

#include <windows.h>
#include <locale.h>
#include <stdio.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int fibonacci[50], n;

    printf("=============== FIBONACCI ===============\n");
    do {
        printf("Defina um número maior do que 2 e menor do que 50 para que seja exibida a série de fibonacci: ");
        scanf("%d%*c", &n);
    } while (n <= 2 || n > 50);

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (int i=2; i<n; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    printf("=============== RESULTADO ===============");
    printf("\nA sequência de fibonacci com %d números é: \n", n);
    for (int i=0; i<n; i++) {
        printf("- %d ", fibonacci[i]);
    }
}
