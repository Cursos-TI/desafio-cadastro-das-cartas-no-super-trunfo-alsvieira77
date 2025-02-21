#include <stdio.h>

int main(){

    // A seguir são definidas as variaveis necessárias para o preenchimento das cartas

    char Estado; // Nome do estado representado por uma letra de "A" a "H"
    char Codigo[4]; // Letra inicial do estado seguido de um numero ex: A01, A02, A03
    char Cidade[50]; // Nome da cidade
    unsigned long int Populacao; // População da cidade
    float Area; // Área em km2
    float PIB; // Produto interno bruto da cidade
    int PontosTuristicos; // Quantidade de pontos turisticos da cidade
    

    char Estado2; // Nome do estado representado por uma letra de "A" a "H"
    char Codigo2[4]; // Letra inicial do estado seguido de um numero ex: A01, A02, A03
    char Cidade2[50]; // Nome da cidade
    unsigned long int Populacao2; // População da cidade
    float Area2; // Área em km2
    float PIB2; // Produto interno bruto da cidade
    int PontosTuristicos2; // Quantidade de pontos turisticos da cidade

    // A seguir são solicitados os dados para o preenchimento das cartas
    // printf para imprimir a solicitação de dados
    // scanf para armazenar os dados fornecidos pelo usuário

    printf("PREENCHA OS DADOS DA PRIMEIRA CARTA: \n");
    printf("\nCódigo do estado (Representado por uma letra de 'A' a 'H'): \n");
    scanf(" %c", &Estado);

    printf("Código da carta (Ex: A01, A02): \n");
    scanf("%s", Codigo);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", Cidade);   

    printf("População da cidade: (Sem pontuação) \n"); 
    scanf("%lu", &Populacao);

    printf("Área total da cidade em km2: \n");
    scanf("%f", &Area);

    // Utilizei a instrução "Sem pontuação" pois ao colocar o numero com a pontuação o programa não me permite preencher os próximos dados.

    printf("PIB da cidade (Coloque o valor inteiro): \n");
    scanf("%f", &PIB);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos); 
    
    // Adicionamos as variaveis depois de coletar os dados para que possamos calcular a densidade populacional e o PIB per capita
    float DensidadePopulacional = (float) Populacao / Area; // Equação para calcular a densidade populacional
    float PIBperCapita = (float) PIB / Populacao; // Equação para calcular o PIB per capita
    float Super = (float) (Populacao + Area + PIB + PontosTuristicos + PIBperCapita) + ( 1 / DensidadePopulacional);

    // A seguir são solicitados os dados para o preenchimento da segunda carta

    printf("\nPREENCHA OS DADOS DA SEGUNDA CARTA: \n");
    printf("\nCódigo do estado (Representado por uma letra de 'A' a 'H'): \n");
    scanf(" %c", &Estado2);

    printf("Código da carta (Ex: A01, A02): \n");
    scanf("%s", Codigo2);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", Cidade2);

    printf("População da cidade: (Sem pontuação) \n");
    scanf("%lu", &Populacao2);   

    printf("Área total da cidade em km2: \n");
    scanf("%f", &Area2);

    printf("PIB da cidade (Coloque o valor inteiro): \n");
    scanf("%f", &PIB2);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos2);

    // Adicionamos as variaveis depois de coletar os dados para que possamos calcular a densidade populacional e o PIB per capita
    float DensidadePopulacional2 = (float) Populacao2 / Area2; // Equação para calcular a densidade populacional
    float PIBperCapita2 = (float) PIB2 / Populacao2; // Equação para calcular o PIB per capita
    float Super2 = (float) (Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBperCapita2) - ( 1 / DensidadePopulacional2);


    // A seguir utilizamos o comando printf para imprimir os dados coletados

    printf("\nINFORMAÇÕES DA CARTA 01: \n");
    printf("\nCÓDIGO DO ESTADO: %c \n", Estado);
    printf("CÓDIGO DA CARTA: %s \n", Codigo);
    printf("NOME DA CIDADE: %s \n", Cidade);
    printf("POPULAÇÃO DA CIDADE: %lu \n", Populacao);
    printf("ÁREA DA CIDADE: %.2f km² \n", Area);
    printf("PRODUTO INTERNO BRUTO (PIB): %.1f bilhões \n", PIB / 1000000000); // Dividimos o valor por 1 bilhão para ficar de forma mais legível.
    printf("PONTOS TURISTICOS: %d \n", PontosTuristicos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km² \n", DensidadePopulacional);
    printf("PIB PER CAPITA: %.2f reais \n", PIBperCapita);
    printf("SUPER PODER: %.1f \n", Super);

    printf("\nINFORMAÇÕES DA CARTA 02: \n");
    printf("\nCÓDIGO DO ESTADO: %c \n", Estado2);
    printf("CÓDIGO DA CARTA: %s \n", Codigo2);
    printf("NOME DA CIDADE: %s \n", Cidade2);
    printf("POPULAÇÃO DA CIDADE: %lu \n", Populacao2);
    printf("ÁREA DA CIDADE EM KM2: %.2f \n", Area2);
    printf("PRODUTO INTERNO BRUTO (PIB): %.1f bilhões \n", PIB2 / 1000000000); // Dividimos o valor por 1 bilhão para ficar de forma mais legível.
    printf("PONTOS TURISTICOS: %d \n", PontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB PER CAPITA: %.2f reais \n", PIBperCapita2);
    printf("SUPER PODER: %1f \n", Super2);

    // Comparação dos atributos das cartas

    printf("\n***COMPARANDO AS CARTAS***\n");
    
    if (Populacao > Populacao2) {
        printf("\nA carta 01 vence no atributo População.\n");
    } else {
        printf("\nA carta 02 vence no atributo População.\n");
    }

    if (Area > Area2) {
        printf("A carta 01 vence no atributo Área.\n");
    } else {
        printf("A carta 02 vence no atributo Área.\n");
    }

    if (PIB > PIB2) {
        printf("A carta 01 vence no atributo PIB.\n");
    } else {
        printf("A carta 02 vence no atributo PIB.\n");
    }

    if (PontosTuristicos > PontosTuristicos2) {
        printf("A carta 01 vence no atributo Pontos Turísticos.\n");
    } else {
        printf("A carta 02 vence no atributo Pontos Turísticos.\n");
    }

    if (DensidadePopulacional > DensidadePopulacional2) {
        printf("A carta 01 vence no atributo Densidade Populacional.\n");
    } else {
        printf("A carta 02 vence no atributo Densidade Populacional.\n");
    }

    if (PIBperCapita > PIBperCapita2) {
        printf("A carta 01 vence no atributo PIB per Capita.\n");
    } else {
        printf("A carta 02 vence no atributo PIB per Capita.\n");
    }

    if (Super > Super2) {
        printf("A carta 01 vence no atributo Super Poder.\n");
    } else {
        printf("A carta 02 vence no atributo Super Poder.\n");
    }

    


    



    return 0;


}