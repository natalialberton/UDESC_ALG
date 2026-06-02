//
// Created by alber on 02/06/2026.
//
//Faça um programa que leia 30 valores inteiros em um vetor e retorne a média dos
//valores ímpares maiores que 10.

#include <locale.h>
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int QTD = 30;
    int vet[QTD], somaImpar = 0, qtdImpar = 0;
    float media;

    printf("=============== MÉDIA DOS ÍMPARES ===============");
    for (int i=0; i<QTD; i++) {
        printf("\nInforme o %d número:\n ", i+1);
        scanf("%d%*c", &vet[i]);

        if (vet[i] % 2 != 0) {
            somaImpar += vet[i];
            qtdImpar++;
        }
    }

    media = somaImpar / qtdImpar;

    printf("=============== RESULTADO ===============");
    printf("\nMédia dos números ímpares: %2.f", media);
}