//
// Created by alber on 12/05/2026.
//
// Sistema de Recomendação de Filmes / Séries

// Tabela de Títulos:
// Título                                       | Tipo | Censura | Categoria | Streaming
// ------------------------------------------------------------------------------------------------
// "Vingadores: Ultimato"                       | 1    | 18      | 1         | 1 (Netflix)
// "O Rei Leão"                                 | 1    | 0       | 1         | 3 (Disney+)
// "Breaking Bad"                               | 2    | 18      | 2         | 1 (Netflix)
// "Friends"                                    | 2    | 10      | 2         | 2 (Amazon Prime)
// "Stranger Things"                            | 2    | 10      | 1         | 1 (Netflix)
// "Titanic"                                    | 1    | 10      | 3         | 2 (Amazon Prime)
// "Chernobyl"                                  | 2    | 18      | 4         | 4 (HBO Max)
// "La Casa de Papel"                           | 2    | 18      | 1         | 1 (Netflix)
// "O Menino que Descobriu o Vento"             | 1    | 0       | 3         | 3 (Disney+)
// "Dark"                                       | 2    | 18      | 1         | 1 (Netflix)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Setando configurações para que sejam aceitos caracteres especiais
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR.UTF-8");

    // VARIÁVEIS
    int tipoTitulo, censura, categoria, streaming;

    // IDENTIFICANDO AS PREFERÊNCIAS DO USUÁRIO
    printf("=============== SELEÇÃO DE FILMES / SÉRIES ===============");

    printf("Qual seu tipo de mídia título favorito? (Insira o número)");
    printf("1 - Filme \n2 - Série \n3 - Documentário \n");
    scanf("%d%*c", &tipoTitulo);

    printf("Você tem algum limite de censura? Insira a idade mínima: ");
    printf("- 0 \n- 10 \n- 14 \n- 16 \n- 18");
    scanf("%d%*c", &censura);

    printf("Qual sua categoria de título favorita? Insira o número:");
    printf("1 - Aventura \n2 - Comédia \n3 - Romance \n4 - Ficção Científica \n5 - Terror");
    scanf("%d%*c", &categoria);

    printf("Qual seu serviço de streaming atual? Insira o número:");
    printf("1 - Netflix \n2 - HBO Max \n3 - Disney+ \n4 - Amazon Prime \n5 - Irrelevante, vou piratear o filme!");
    scanf("%d%*c", &streaming);

    // ANALISANDO QUAL SERIA O TÍTULO IDEAL


}
