//
// Created by alber on 05/05/2026.
//
// Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino)
// de N pessoas. Faça um algoritmo que calcule e escreva:
// - A maior altura entre os homens
// - A média de altura entre as mulheres

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int qtdPessoas;
    char sexo;
    int altura;
    int maiorAltura = 0;
    int contagemF = 0;
    float mediaAltura = 0;

    printf("=============== ALTURA ===============");
    printf("\nInforme a quantidade de pessoas: ");
    scanf("%d%*c", &qtdPessoas);

    for (int i = 0; i < qtdPessoas; i++) {
        printf("\n%d - Informe o sexo (M ou F): ", i+1);
        scanf("%c%*c", &sexo);

        printf("%d - Informe a altura em centímetros: ", i+1);
        scanf("%d%*c", &altura);

        if (sexo == 'M') {
            if (maiorAltura < altura) {
                maiorAltura = altura;
            }
        } else if (sexo == 'F') {
            mediaAltura += altura;
            contagemF++;
        }
    }

    mediaAltura = mediaAltura / contagemF;

    printf("=============== RESULTADO ===============\n");
    printf("Maior altura entre os HOMENS: %d", maiorAltura);
    printf("\nMédia de altura entre as MULHERES: %2.f", mediaAltura);

    return 0;
}