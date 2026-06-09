//
// Created by alber on 05/05/2026.
//
// Escreva um algoritmo que determine o valor aproximado do seno de x com base na
// série abaixo. O número de termos da série bem como o valor de x são determinados
// pelo usuário. Obs.: para a potenciação, não é permitido o uso de funções ou
// operadores predefinidos.
// 𝑠𝑒𝑛𝑜𝑥( ) = 𝑥 − 𝑥³/3! + x²+³/5! ... = ∞ ∑ 𝑛=0 (−1)𝑛 𝑥²+¹/(2n+1)!

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");
    double x, seno = 0.0;
    int nTermos;

    printf("=============== SENO DE X ===============\n");
    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);

    printf("Digite o número de termos da série: ");
    scanf("%d", &nTermos);

    for (int n = 0; n < nTermos; n++) {
        // O expoente e o fatorial sao baseados em (2n + 1)
        int expoente = 2 * n + 1;

        // Calculando a potência (x^expoente) manualmente
        double potencia = 1.0;
        for (int i = 0; i < expoente; i++) {
            potencia *= x;
        }

        // Calculando o fatorial (expoente!) manualmente
        double fatorial = 1.0;
        for (int i = 1; i <= expoente; i++) {
            fatorial *= i;
        }

        // Aplicando a alternância de sinal e somando ao total
        if (n % 2 == 0) {
            seno += potencia / fatorial;
        } else {
            seno -= potencia / fatorial;
        }
    }

    printf("=============== RESULTADO ===============\n");
    printf("O valor aproximado de seno(%.2f) é: %.10f", x, seno);

    return 0;
}