//
// Created by alber on 02/06/2026.
//
//Escreva um programa que leia um vetor de tamanho 30. A seguir, inverta o vetor da
//seguinte maneira: troque o primeiro elemento com o último, o segundo elemento com
//o penúltimo, etc., até chegar ao meio do vetor. Defina a solução de maneira genérica,
//de modo a funcionar para qualquer vetor de capacidade n. Por fim, mostre na tela o
//vetor invertido.


#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int N = 5;
    float vet[N], vetInvertido[N];

    printf("=============== VETOR INVERTIDO ===============");
    for (int i=0; i<N; i++) {
        printf("\nInforme o %dº número:\n ", i+1);
        scanf("%f%*c", &vet[i]);
    }
}