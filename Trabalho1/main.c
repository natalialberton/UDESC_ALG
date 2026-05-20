//
// Aluna: Natalí Alberton Grolli
// Professor: Douglas Dutra
//
// Sistema de Recomendação de Filmes / Séries

// Tabela de Títulos:
// Título                                       | Tipo | Censura | Categoria | Streaming
// ------------------------------------------------------------------------------------------------
// "Desventuras em Série"                       | 2    | 12      | 1         | 1 (Netflix)
// "Invocação do Mal"                           | 1    | 16      | 5         | 2 (HBO Max)
// "Stranger Things"                            | 2    | 16      | 5         | 1 (Netflix)
// "Dilema das Redes"                           | 3    | 12      | 4         | 1 (Netflix)
// "The Last of Us"                             | 2    | 16      | 4         | 2 (HBO Max)
// "The Office"                                 | 2    | 12      | 2         | 4 (Amazon Prime)
// "Como Se Fosse a Primeira Vez"               | 1    | 0       | 3         | 2 (HBO Max)
// "Percy Jackson e os Olimpianos"              | 2    | 12      | 1         | 3 (Disney+)
// "Deadpool"                                   | 1    | 18      | 2         | 1 (Disney+)
// "The Boys"                                   | 2    | 18      | 2         | 4 (Amazon Prime)
// "Nimona"                                     | 1    | 0       | 1         | 1 (Netflix)

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

    printf("\nQual seu serviço de streaming atual? Insira o número:\n");
    printf("1 - Netflix \n2 - HBO Max \n3 - Disney+ \n4 - Amazon Prime \n5 - Irrelevante, vou piratear o filme!\n");
    scanf("%d%*c", &streaming);

    printf("\nVocê tem algum limite de censura? Insira a idade mínima:\n");
    printf("- 0 \n- 12 \n- 16 \n- 18\n");
    scanf("%d%*c", &censura);

    printf("\nQual seu tipo de mídia título favorito? Insira o número:\n");
    printf("1 - Filme \n2 - Série \n3 - Documentário\n");
    scanf("%d%*c", &tipoTitulo);

    printf("\nQual sua categoria de título favorita? Insira o número:\n");
    printf("1 - Aventura \n2 - Comédia \n3 - Romance \n4 - Ficção Científica \n5 - Terror\n");
    scanf("%d%*c", &categoria);

    // ANALISANDO QUAL SERIA O TÍTULO IDEAL
    // Ordem de prioridade: Streaming -- Censura -- Tipo Título -- Categoria

    printf("=============== SEU TÍTULO IDEAL ===============\n");

    // =======================================================
    // STREAMING = 1 (NETFLIX)
    // =======================================================
    if (streaming == 1) {
        if (censura == 0) {
            printf("Seu título ideal seria: Nimona!"
                "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
        } else if (censura <= 12) {
            if (tipoTitulo == 1 ) {
                printf("Seu título ideal seria: Nimona!"
                "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
            } else if (tipoTitulo == 2 ) {
                printf("Seu título ideal seria: Desventuras em Série!"
                "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
            } else if (tipoTitulo == 3 ) {
                printf("Seu título ideal seria: Dilema das Redes!"
                "\nStreaming: Netflix\nCensura: 12\nTipo: Documentário\nCategoria: Ficção Científica");
            } else {
                printf("Parece que você digitou algo errado. Tente inserir suas preferências de novo!");
            }
        } else if (censura <= 16) {
            if (tipoTitulo == 1 ) {
                printf("Seu título ideal seria: Nimona!"
                "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
            } else if (tipoTitulo == 2 ) {
                if (categoria == 1) {
                    printf("Seu título ideal seria: Desventuras em Série!"
                    "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                } else if (categoria == 5) {
                    printf("Seu título ideal seria: Stranger Things!"
                    "\nStreaming: Netflix\nCensura: 16\nTipo: Série\nCategoria: Terror");
                } else {
                    printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                    printf("\n1 - Desventuras em Série!"
                    "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n2 - Stranger Things!"
                    "\nStreaming: Netflix\nCensura: 16\nTipo: Série\nCategoria: Terror");
                }
            } else if (tipoTitulo == 3 ) {
                printf("Seu título ideal seria: Dilema das Redes!"
                "\nStreaming: Netflix\nCensura: 12\nTipo: Documentário\nCategoria: Ficção Científica");
            } else {
                printf("Parece que não temos este tipo de título. Tente inserir suas preferências de novo!");
            }
        } else {
            printf("Parece que não temos títulos nessa classificação de censura. Tente inserir suas preferências de novo!");
        }

        // =======================================================
        // STREAMING = HBO Max
        // =======================================================
    } else if (streaming == 2) {
        if (censura == 0) {
            printf("Seu título ideal seria: Como Se Fosse a Primeira Vez!"
            "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
        } else if (censura <= 16) {
            if (tipoTitulo == 1 ) {
                if (categoria == 3) {
                    printf("Seu título ideal seria: Como Se Fosse a Primeira Vez!"
                    "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
                } else if (categoria == 5) {
                    printf("Seu título ideal seria: Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                } else {
                    printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                    printf("\n1 - Como Se Fosse a Primeira Vez!"
                    "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
                    printf("\n2 - Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                }
            } else if (tipoTitulo == 2 ) {
                printf("Seu título ideal seria: The Last of Us!"
                "\nStreaming: HBO Max\nCensura: 16\nTipo: Série\nCategoria: Ficção Científica");
            } else {
                printf("Parece que não temos este tipo de título. Tente inserir suas preferências de novo!");
            }
        } else {
            printf("Parece que não temos títulos nessa classificação de censura. Tente inserir suas preferências de novo!");
        }

        // =======================================================
        // STREAMING = Disney+
        // =======================================================
    } else if (streaming == 3) {
        if (censura <= 12) {
            printf("Seu título ideal seria: Percy Jackson e os Olimpianos!"
            "\nStreaming: Disney+\nCensura: 12\nTipo: Série\nCategoria: Aventura");
        } else if (censura <= 18) {
            printf("Seu título ideal seria: Deadpool!"
            "\nStreaming: Disney+\nCensura: 18\nTipo: Filme\nCategoria: Comédia");
        } else {
            printf("Parece que não temos títulos nessa classificação de censura. Tente inserir suas preferências de novo!");
        }

        // =======================================================
        // STREAMING = Amazon Prime
        // =======================================================
    } else if (streaming == 4) {
        if (censura <= 12) {
            printf("Seu título ideal seria: The Office!"
            "\nStreaming: Amazon Prime\nCensura: 12\nTipo: Série\nCategoria: Comédia");
        } else if (censura <= 18) {
            printf("Seu título ideal seria: The Boys!"
            "\nStreaming: Amazon Prime\nCensura: 18\nTipo: Série\nCategoria: Comédia");
        } else {
            printf("Parece que não temos títulos nessa classificação de censura. Tente inserir suas preferências de novo!");
        }

        // =======================================================
        // STREAMING = Qualquer um
        // =======================================================
    } else if (streaming == 5) {
        if (censura == 0) {
            if (categoria == 1) {
                printf("Seu título ideal seria: Nimona!"
                "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
            } else if (categoria == 3) {
                printf("Seu título ideal seria: Como Se Fosse a Primeira Vez!"
                "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
            } else {
                printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                printf("\n1 - Nimona!"
                "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
                printf("\n2 - Como Se Fosse a Primeira Vez!"
                "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
            }
        } else if (censura <= 12) {
            if (tipoTitulo == 1) {
                if (categoria == 1) {
                    printf("Seu título ideal seria: Nimona!"
                    "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
                } else if (categoria == 3) {
                    printf("Seu título ideal seria: Como Se Fosse a Primeira Vez!"
                    "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
                } else {
                    printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                    printf("\n1 - Nimona!"
                    "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
                    printf("\n2 - Como Se Fosse a Primeira Vez!"
                    "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
                }
            } else if (tipoTitulo == 2) {
                if (categoria == 1) {
                    printf("Seu título ideal seria: Desventuras em Série!"
                    "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n\nSeu título ideal também pode ser: Percy Jackson e os Olimpianos!"
                    "\nStreaming: Disney+\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                } else if (categoria == 2) {
                    printf("Seu título ideal seria: The Office!"
                    "\nStreaming: Amazon Prime\nCensura: 12\nTipo: Série\nCategoria: Comédia");
                } else {
                    printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                    printf("\n1 - Desventuras em Série!"
                    "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n2 - Percy Jackson e os Olimpianos!"
                    "\nStreaming: Disney+\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n3 - The Office!"
                    "\nStreaming: Amazon Prime\nCensura: 12\nTipo: Série\nCategoria: Comédia");
                }
            } else if (tipoTitulo == 3 ) {
                printf("Seu título ideal seria: Dilema das Redes!"
                "\nStreaming: Netflix\nCensura: 12\nTipo: Documentário\nCategoria: Ficção Científica");
            } else {
                printf("Parece que não temos este tipo de título. Tente inserir suas preferências de novo!");
            }
        } else if (censura <= 16) {
            if (tipoTitulo == 1) {
                if (categoria == 1) {
                    printf("Seu título ideal seria: Nimona!"
                    "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
                } else if (categoria == 3) {
                    printf("Seu título ideal seria: Como Se Fosse a Primeira Vez!"
                    "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
                } else if (categoria == 5) {
                    printf("Seu título ideal seria: Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                } else {
                    printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                    printf("\n1 - Nimona!"
                    "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
                    printf("\n2 - Como Se Fosse a Primeira Vez!"
                    "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
                    printf("\n3 - Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                }
            } else if (tipoTitulo == 2) {
                if (categoria == 1) {
                    printf("Seu título ideal seria: Desventuras em Série!"
                    "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n\nSeu título ideal também pode ser: Percy Jackson e os Olimpianos!"
                    "\nStreaming: Disney+\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                } else if (categoria == 2) {
                    printf("Seu título ideal seria: The Office!"
                    "\nStreaming: Amazon Prime\nCensura: 12\nTipo: Série\nCategoria: Comédia");
                } else if (categoria == 4) {
                    printf("Seu título ideal seria: The Last of Us!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Série\nCategoria: Ficção Científica");
                } else if (categoria == 5) {
                    printf("Seu título ideal seria: Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                } else {
                    printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                    printf("\n1 - Desventuras em Série!"
                    "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n2 - Percy Jackson e os Olimpianos!"
                    "\nStreaming: Disney+\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n3 - The Office!"
                    "\nStreaming: Amazon Prime\nCensura: 12\nTipo: Série\nCategoria: Comédia");
                    printf("\n4 - The Last of Us!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Série\nCategoria: Ficção Científica");
                    printf("\n5 - Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                }
            } else if (tipoTitulo == 3 ) {
                printf("Seu título ideal seria: Dilema das Redes!"
                "\nStreaming: Netflix\nCensura: 12\nTipo: Documentário\nCategoria: Ficção Científica");
            } else {
                printf("Parece que não temos este tipo de título. Tente inserir suas preferências de novo!");
            }
        } else if (censura <= 18) {
            if (tipoTitulo == 1) {
                if (categoria == 1) {
                    printf("Seu título ideal seria: Nimona!"
                    "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
                } else if (categoria == 2) {
                    printf("Seu título ideal seria: Deadpool!"
                    "\nStreaming: Disney+\nCensura: 18\nTipo: Filme\nCategoria: Comédia");
                } else if (categoria == 3) {
                    printf("Seu título ideal seria: Como Se Fosse a Primeira Vez!"
                    "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
                } else if (categoria == 5) {
                    printf("Seu título ideal seria: Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                } else {
                    printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                    printf("\n1 - Nimona!"
                    "\nStreaming: Netflix\nCensura: 0\nTipo: Filme\nCategoria: Aventura");
                    printf("\n2 - Deadpool!"
                    "\nStreaming: Disney+\nCensura: 18\nTipo: Filme\nCategoria: Comédia");
                    printf("\n3 - Como Se Fosse a Primeira Vez!"
                    "\nStreaming: HBO Max\nCensura: 0\nTipo: Filme\nCategoria: Romance");
                    printf("\n4 - Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                }
            } else if (tipoTitulo == 2) {
                if (categoria == 1) {
                    printf("Seu título ideal seria: Desventuras em Série!"
                    "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n\nSeu título ideal também pode ser: Percy Jackson e os Olimpianos!"
                    "\nStreaming: Disney+\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                } else if (categoria == 2) {
                    printf("Seu título ideal seria: The Office!"
                    "\nStreaming: Amazon Prime\nCensura: 12\nTipo: Série\nCategoria: Comédia");
                    printf("\n\nSeu título ideal também pode ser: The Boys!"
                    "\nStreaming: Amazon Prime\nCensura: 18\nTipo: Série\nCategoria: Comédia");
                } else if (categoria == 4) {
                    printf("Seu título ideal seria: The Last of Us!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Série\nCategoria: Ficção Científica");
                } else if (categoria == 5) {
                    printf("Seu título ideal seria: Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                } else {
                    printf("Parece que não temos um título em sua categoria de preferência. Veja se algum dos seguintes títulos te agradam: ");
                    printf("\n1 - Desventuras em Série!"
                    "\nStreaming: Netflix\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n2 - Percy Jackson e os Olimpianos!"
                    "\nStreaming: Disney+\nCensura: 12\nTipo: Série\nCategoria: Aventura");
                    printf("\n3 - The Office!"
                    "\nStreaming: Amazon Prime\nCensura: 12\nTipo: Série\nCategoria: Comédia");
                    printf("\n4 - The Boys!"
                    "\nStreaming: Amazon Prime\nCensura: 18\nTipo: Série\nCategoria: Comédia");
                    printf("\n5 - The Last of Us!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Série\nCategoria: Ficção Científica");
                    printf("\n6 - Invocação do Mal!"
                    "\nStreaming: HBO Max\nCensura: 16\nTipo: Filme\nCategoria: Terror");
                }
            } else if (tipoTitulo == 3 ) {
                printf("Seu título ideal seria: Dilema das Redes!"
                "\nStreaming: Netflix\nCensura: 12\nTipo: Documentário\nCategoria: Ficção Científica");
            } else {
                printf("Parece que não temos este tipo de título. Tente inserir suas preferências de novo!");
            }
        } else {
            printf("Parece que não temos títulos nessa classificação de censura. Tente inserir suas preferências de novo!");
        }

    } else {
        printf("Esse serviço de streaming não é uma opção... Tente inserir suas preferências novamente!!");
    }

    return 0;
}
