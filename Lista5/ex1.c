//
// Created by 12714045910 on 22/04/2026.
//
// Faça um programa que leia um vetor de inteiros de capacidade 20, e mostre na tela a
// quantidade de valores pares.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int v[20];

    printf("=============== NÚMEROS PARES ===============");
    for (int i=0; i<20; i++) {
        printf("\nInforme o %dº número: ", i+1);
        scanf("%d%*c", &v[i]);
    }

    printf("=============== RESULTADO ===============\n");
    printf("São pares os seguintes números:\n");
    for (int i=0; i<20; i++) {
        if (v[i] % 2 == 0) {
            printf(" | %d", v[i]);
        }
    }

    return 0;
}


