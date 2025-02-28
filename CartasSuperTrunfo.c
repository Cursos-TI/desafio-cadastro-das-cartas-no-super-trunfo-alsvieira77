#include <stdio.h>

const char* nomesAtributos[] = {
    "Inválido", // índice 0 não será usado
    "População da cidade",
    "Área",
    "Produto Interno Bruto",
    "Quantidade de pontos turísticos",
    "Densidade Populacional",
    "PIB per Capita",
    "Super Poder"
};

int main() {

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

    printf("### BEM VINDOS AO JOGO DE SUPER TRUNFO ###");

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

    printf("\n*** INFORMAÇÕES DA CARTA 01 *** \n");
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

    printf("\n*** INFORMAÇÕES DA CARTA 02 ***\n");
    printf("\nCÓDIGO DO ESTADO: %c \n", Estado2);
    printf("CÓDIGO DA CARTA: %s \n", Codigo2);
    printf("NOME DA CIDADE: %s \n", Cidade2);
    printf("POPULAÇÃO DA CIDADE: %lu \n", Populacao2);
    printf("ÁREA DA CIDADE: %.2f km² \n", Area2);
    printf("PRODUTO INTERNO BRUTO (PIB): %.1f bilhões \n", PIB2 / 1000000000); // Dividimos o valor por 1 bilhão para ficar de forma mais legível.
    printf("PONTOS TURISTICOS: %d \n", PontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB PER CAPITA: %.2f reais \n", PIBperCapita2);
    printf("SUPER PODER: %.1f \n", Super2);

    // Comparação dos atributos das cartas
    // Utilizamos estrutura switch case para criar um menu interativo onde o usuário escolhe o atributo que deseja comparar
    // utilizamos o if-else para determinar a carta vencedora após comparação

    int opcao1, opcao2;

    printf("\n### COMPARANDO AS CARTAS ###\n");
    printf("*** ESCOLHA O PRIMEIRO ATRIBUTO QUE DESEJA COMPARAR ***\n");
    printf("1. População da cidade\n");
    printf("2. Área\n");
    printf("3. Produto Interno Bruto\n");
    printf("4. Quantidade de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao1);

    printf("*** ESCOLHA O SEGUNDO ATRIBUTO QUE DESEJA COMPARAR ***\n");
    printf("1. População da cidade\n");
    printf("2. Área\n");
    printf("3. Produto Interno Bruto\n");
    printf("4. Quantidade de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao2);

    // Verificar se os atributos escolhidos são diferentes
    if (opcao1 == opcao2) {
        printf("Os atributos escolhidos devem ser diferentes. Repita a operação!\n");
        return 1;
    }

    // Função para obter o valor do atributo escolhido
    float obterValorAtributo(int opcao, unsigned long int populacao, float area, float pib, int pontosTuristicos, float densidadePopulacional, float pibPerCapita, float super) {
        switch (opcao) {
            case 1: return (float)populacao;
            case 2: return area;
            case 3: return pib;
            case 4: return (float)pontosTuristicos;
            case 5: return densidadePopulacional;
            case 6: return pibPerCapita;
            case 7: return super;
            default: return 0;
        }
    }

    // Obter os valores dos atributos escolhidos para cada carta
    float valorCarta1Atributo1 = obterValorAtributo(opcao1, Populacao, Area, PIB, PontosTuristicos, DensidadePopulacional, PIBperCapita, Super);
    float valorCarta2Atributo1 = obterValorAtributo(opcao1, Populacao2, Area2, PIB2, PontosTuristicos2, DensidadePopulacional2, PIBperCapita2, Super2);
    float valorCarta1Atributo2 = obterValorAtributo(opcao2, Populacao, Area, PIB, PontosTuristicos, DensidadePopulacional, PIBperCapita, Super);
    float valorCarta2Atributo2 = obterValorAtributo(opcao2, Populacao2, Area2, PIB2, PontosTuristicos2, DensidadePopulacional2, PIBperCapita2, Super2);

    // Comparar os valores dos atributos
    printf("\nComparando os atributos escolhidos:\n");
    printf("Atributo 1 (%s): %.2f vs %.2f\n", nomesAtributos[opcao1], valorCarta1Atributo1, valorCarta2Atributo1);
    printf("Atributo 2 (%s): %.2f vs %.2f\n", nomesAtributos[opcao2], valorCarta1Atributo2, valorCarta2Atributo2);

    float somaCarta1, somaCarta2;

    // Verificar se algum dos atributos é Densidade Populacional (opcao 5)
    if (opcao1 == 5 || opcao2 == 5) {
        // Se for densidade populacional, o menor valor vence
        somaCarta1 = (opcao1 == 5 ? -valorCarta1Atributo1 : valorCarta1Atributo1) + (opcao2 == 5 ? -valorCarta1Atributo2 : valorCarta1Atributo2);
        somaCarta2 = (opcao1 == 5 ? -valorCarta2Atributo1 : valorCarta2Atributo1) + (opcao2 == 5 ? -valorCarta2Atributo2 : valorCarta2Atributo2);
    } else {
        // Caso contrário, o maior valor vence
        somaCarta1 = valorCarta1Atributo1 + valorCarta1Atributo2;
        somaCarta2 = valorCarta2Atributo1 + valorCarta2Atributo2;
    }

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", Cidade, somaCarta1);
    printf("Carta 2 (%s): %.2f\n", Cidade2,somaCarta2);

    // Determinar o vencedor usando operador ternário
    printf("\nResultado:\n");
    (somaCarta1 > somaCarta2) ? printf("A carta 01 (%s) vence a rodada!\n", Cidade) :
    (somaCarta1 < somaCarta2) ? printf("A carta 02 (%s) vence a rodada!\n", Cidade2) :
    printf("Empate!\n");

    return 0;
}