//
// Created by alber on 09/06/2026.
//
//Faça um programa que, dados k e n, mostre na tela os n primeiros números primos acima
//de k. A verificação do número (se é ou não é primo) deve ser feita através de uma função.

#include <windows.h>
#include <locale.h>
#include <stdio.h>

int eh_primo(int num);

int eh_primo(int num) {
    if (num < 2)
        return 0;

    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return 0;

    return 1;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int k, n, encontrados, candidato;

    printf("======== NÚMEROS PRIMOS ========\n\n");

    printf("A partir de qual número: ");
    scanf("%d%*c", &k);

    do {
        printf("Quantos primos exibir: ");
        scanf("%d%*c", &n);
    } while (n <= 0);

    printf("\n%d primeiros primos acima de %d:\n\n", n, k);

    encontrados = 0;
    candidato   = k + 1;

    while (encontrados < n) {
        if (eh_primo(candidato)) {
            printf("  %d\n", candidato);
            encontrados++;
        }
        candidato++;
    }

    printf("\nTotal encontrado: %d números primos.\n", n);

    return 0;
}