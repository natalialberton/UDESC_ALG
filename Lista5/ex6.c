//
// Created by alber on 05/05/2026.
//
// Faça um programa que leia 30 números em um vetor. Em seguida, deve informar:
// ● a média de todos os valores;
// ● quais valores estão acima da média, e suas respectivas posições;
// ● quantos estão acima da média;
// ● a soma dos números acima da média;
// ● a porcentagem dos números acima da média em relação ao total de números.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float vet[30];
    float media = 0;
    int qtdAcimaMedia = 0;
    float somaAcimaMedia = 0;
    float porcentagemAcimaMedia;

    printf("=============== DADOS DE UM VETOR ===============");
    for (int i=0; i<30; i++) {
        printf("\nInforme o %dº número: ", i+1);
        scanf("%f%*c", &vet[i]);

        media += vet[i];
    }

    media /= 30;

    for (int i=0; i<30; i++) {
        if (vet[i] > media) {
            somaAcimaMedia += vet[i];
            qtdAcimaMedia++;
        }
    }

    porcentagemAcimaMedia = qtdAcimaMedia * 100 / 30;

    printf("=============== RESULTADO ===============\n");
    printf("Média dos valores: %2.f", media);
    printf("\nValores acima da média: ");
    for (int i=0; i<30; i++) {
        if (vet[i] > media) {
            printf("\n %d - %f", i, vet[i]);
        }
    }

    printf("\nQuantidade de valores acima da média: %d", qtdAcimaMedia);
    printf("\nSoma dos valores acima da média: %2.f", somaAcimaMedia);
    printf("\nPorcentagem de valores acima da média: %2.f%%", porcentagemAcimaMedia);

    return 0;
}
