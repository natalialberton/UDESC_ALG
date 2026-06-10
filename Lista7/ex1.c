//
// Created by alber on 09/06/2026.
//
//Faça um programa que lê os três lados de um triângulo e determina o seu tipo, conforme
//códigos a seguir. Os códigos devem ser retornados por uma função de tipo int, que recebe
//os lados do triângulo como parâmetro. Protótipo da função:
//int tipo_triangulo(float, x, float y, float z);
//O retorno da função deve ser conforme os códigos a seguir:
//0. Os lados não formam um triângulo (ou seja, a soma de dois deles é menor ou igual
//ao outro lado);
//1. Triângulo equilátero;
//2. Triângulo isósceles;
//3. Triângulo escaleno.


#include <windows.h>
#include <locale.h>
#include <stdio.h>

int tipo_triangulo(float x, float y, float z);

int tipo_triangulo(float x, float y, float z) {
    if (x + y <= z || x + z <= y || y + z <= x)
        return 0;

    // Equilátero
    if (x == y && y == z)
        return 1;

    // Isósceles
    if (x == y || y == z || x == z)
        return 2;

    // Escaleno
    return 3;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float a, b, c;
    int tipo;

    printf("======== CLASSIFICADOR DE TRIÂNGULOS ========\n\n");

    do {
        printf("Lado A: ");
        scanf("%f%*c", &a);
    } while (a <= 0);

    do {
        printf("Lado B: ");
        scanf("%f%*c", &b);
    } while (b <= 0);

    do {
        printf("Lado C: ");
        scanf("%f%*c", &c);
    } while (c <= 0);

    tipo = tipo_triangulo(a, b, c);

    printf("\n============== RESULTADO ==============\n");
    printf("Lados: %.2f, %.2f, %.2f\n\n", a, b, c);

    switch (tipo) {
        case 0:
            printf("0 | Os lados não formam um triângulo!\n");
            break;
        case 1:
            printf("1 | Triângulo EQUILÁTERO!\n");
            break;
        case 2:
            printf("2 | Triângulo ISÓSCELES!\n");
            break;
        case 3:
            printf("3 | Triângulo ESCALENO!\n");
            break;
    }

    return 0;
}
