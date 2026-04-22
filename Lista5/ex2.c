//
// Created by 12714045910 on 22/04/2026.
//
// Escreva um programa que leia um vetor de capacidade 30. Substitua, a seguir, todos
//os valores 0 deste vetor por 1 e mostre o vetor na tela

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int v[30];
    int vNaoNulo[30];

    printf("=============== VETOR NÃO NULO ===============");
    for (int i=0; i<30; i++) {
        printf("\nInforme o %dº número: ", i+1);
        scanf("%d%*c", &v[i]);

        if (v[i] == 0) {
            vNaoNulo[i] = 1;
        } else {
            vNaoNulo[i] = v[i];
        }
    }

    printf("=============== RESULTADO ===============\n");
    printf("O vetor NÃO NULO a seguir:\n");
    for (int i=0; i<30; i++) {
        printf("%dº | %d \n", i, vNaoNulo[i]);
    }

    return 0;
}


