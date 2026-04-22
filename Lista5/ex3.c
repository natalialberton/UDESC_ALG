//
// Created by 12714045910 on 22/04/2026.
//
// Elabore um algoritmo que leia um vetor com 20 inteiros e mostre na tela somente os
// valores positivos.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int v[20];

    printf("=============== NÚMEROS POSITIVOS ===============");
    for (int i=0; i<20; i++) {
        printf("\nInforme o %dº número: ", i+1);
        scanf("%d%*c", &v[i]);
    }

    printf("=============== RESULTADO ===============\n");
    printf("Os números positivos do vetor são os seguintes:\n");
    for (int i=0; i<20; i++) {
        if (v[i] > 0) {
            printf("%dº | %d \n", i, v[i]);
        }
    }

    return 0;
}