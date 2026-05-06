//
// Created by 12714045910 on 22/04/2026.
//
// Escreva um algoritmo para ler dois valores e uma das seguintes operações a serem
// executadas (codificadas da seguinte forma: 1 – Adição, 2 – Subtração, 3 –
// Multiplicação e 4 – Divisão). Calcular e escrever o resultado dessa operação sobre
// os dois valores lidos. Nota: testar a entrada no caso de divisão por zero!

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float val1, val2, resultado;
    int operacao;
    bool processado = false;

    printf("=============== CALCULADORA SIMPLES ===============");
    while (processado == false) {
        printf("\nDigite o primeiro valor: ");
        scanf("%f", &val1);

        printf("\nDigite o segundo valor: ");
        scanf("%f", &val2);

        printf("\nEscolha a operação:\n");
        printf("1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
        printf("Opção: ");
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                resultado = val1 + val2;
                processado = true;
                break;

            case 2:
                resultado = val1 - val2;
                processado = true;
                break;

            case 3:
                resultado = val1 * val2;
                processado = true;
                break;

            case 4:
                if (val2 != 0) {
                    resultado = val1 / val2;
                    processado = true;
                } else {
                    printf("Erro: Não é possível dividir por zero!\n");
                }
                break;

            default:
                printf("Opção inválida! Escolha um número de 1 a 4.\n");
                break;
        }
    }

    printf("=============== RESULTADO ===============");
    printf("\nA operação resultou em: %.2f\n", resultado);

    return 0;
}