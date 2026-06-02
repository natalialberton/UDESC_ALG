//
// Created by alber on 02/06/2026.
//
//Escreva um programa que leia dois vetores de capacidade 10 e faça a multiplicação
//dos elementos de mesmo índice, colocando os resultados em um terceiro vetor.
//Mostre o vetor resultante.


#include <locale.h>
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float vet1[10], vet2[10], vetResult[10];

    printf("=============== MULTIPLICAÇÃO DE VETORES ===============");
    for (int i=0; i<10; i++) {
        printf("\n1º Vetor | Informe o %d número:\n ", i+1);
        scanf("%f%*c", &vet1[i]);
    }

    for (int i=0; i<10; i++) {
        printf("\n2º Vetor | Informe o %d número:\n ", i+1);
        scanf("%f%*c", &vet2[i]);
    }

    printf("=============== RESULTADO ===============");
    for (int i=0; i<10; i++) {
        vetResult[i] = vet1[i] * vet2[i];
        printf("\nResultado: %2.f", vetResult[i]);
    }
}

