#include <stdio.h>

typedef struct {

    // Define a uma estrutura chamada Carta onde são armazenados as informações das cartas.

    char Estado; // Nome do estado representado por uma letra de "A" a "H"
    char Codigo[4]; // Letra inicial do estado seguido de um numero ex: A01, A02, A03
    char Cidade[50]; // Nome da cidade
    int Populacao; // População da cidade
    float Area; // Área em km2
    float PIB; // Produto interno bruto da cidade
    int PontosTuristicos; // Quantidade de pontos turisticos da cidade
} Carta;

void readCarta(Carta *carta) {

    // Essa função lê os detalhes de cada carta que serão fornecidos pelo usuário e armazena em suas respectivas variáveis.

    printf("Estado (Letra de 'A' a 'H'): \n");
    scanf(" %c", &carta->Estado);

    printf("Código da carta (Ex: A01, A02): \n");
    scanf("%s", carta->Codigo);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", carta->Cidade);

    printf("População da cidade: (Sem pontuação) \n"); 
    // Não encontrei uma forma de colocar os dados numericos com pontuação
    scanf("%d", &carta->Populacao);

    printf("Área da cidade em km2: (Sem pontuação) \n"); 
    // Não encontrei uma forma de colocar os dados numericos com pontuação
    scanf("%f", &carta->Area);

    printf("PIB da cidade: \n");
    scanf("%f", &carta->PIB);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &carta->PontosTuristicos);
}

void printCarta(const Carta *carta) {

    // Essa função imprime os detalhes de cada carta que foram fornecidos pelo usuário.

    printf("Código do estado: %c \n", carta->Estado);
    printf("Código da Carta: %s \n", carta->Codigo);
    printf("Nome da cidade: %s \n", carta->Cidade);
    printf("População da cidade: %2d \n", carta->Populacao);
    printf("Área da cidade em km2: %.2f \n", carta->Area);
    printf("Produto interno bruto (PIB): %.2f \n", carta->PIB);
    printf("Pontos turisticos: %d \n", carta->PontosTuristicos);
    
}

int main() {
    Carta carta1, carta2;

    // Esta é a função principal do programa.
    // Declara duas estruturas que são chamadas de carta1 e carta.

    printf("Preencha os dados da primeira carta:\n");
    readCarta(&carta1);

    // Solicita ao usuário que preencha os dados da primeira carta.

    printf("\nPreencha os dados da segunda carta:\n");
    readCarta(&carta2);

    // Solicita ao usuário que preencha os dados da segunda carta.

    printf("\nCARTA 1:\n");
    printCarta(&carta1);

    // Imprime os dados da primeira carta.

    printf("\nCARTA 2:\n");
    printCarta(&carta2);

    // Imprime os dados da segunda carta.



    // Tive muita dificuldade em realizar a formatação dos dados numéricos, não consegui colocar a pontuação nos números.
    // Encontrei dificuldade também em realizar a leitura de strings com espaços, por isso optei por não utilizar espaços nos nomes das cidades.
    // Não consegui encontrar uma forma de cadastrar duas cartas de forma individual, por isso busquei ajuda na internet.
    // Os comandos typedef e struct foram utilizados para criar uma estrutura de dados que armazena as informações das cartas.
    // O comando void foi utilizado para criar funções que não retornam valores.
    // A função printCarta foi criada para imprimir os detalhes de cada carta de forma individual.
    // A função readCarta foi criada para ler os detalhes de cada carta de forma individual.


    return 0;
}