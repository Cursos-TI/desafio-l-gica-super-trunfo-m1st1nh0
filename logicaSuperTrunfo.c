#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta A
    char estadoA;
    char codigoA[4];
    char nome_cidadeA[30];
    int qtd_pontos_turisticosA;
    unsigned long int populacaoA;
    float pibA, densidade_demograficaA, pib_per_capitaA, areaA, superpodorA, inversoA;

    // Carta B
    char estadoB;
    char codigoB[4];
    char nome_cidadeB[30];
    int qtd_pontos_turisticosB;
    unsigned long int populacaoB;
    float pibB, densidade_demograficaB, pib_per_capitaB, areaB, superpodorB, inversoB;

    // Área para entrada de dados - CARTA A
    // estado
    printf("Digite uma letra entre A-H para representar o estado da Carta A: \n");
    scanf("%c", &estadoA);
    // codigo
    printf("Digite o código da carta (Letra do estado + número entre 01 - 04 Ex 'A01'): \n");
    scanf("%s", &codigoA);
    // nomo da cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidadeA);
    // populacao
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacaoA);
    // area
    printf("Digite área da cidade: \n");
    scanf("%f", &areaA);
    // PIB
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA);
    // quantidade de pontos turisticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &qtd_pontos_turisticosA);

    densidade_demograficaA = (float)populacaoA / areaA;
    pib_per_capitaA = pibA / populacaoA;
    inversoA = (1.0 / densidade_demograficaA);
    superpodorA = (float)qtd_pontos_turisticosA + (float)populacaoA + areaA + pibA + pib_per_capitaA + inversoA;

    //  Área para exibição dos dados da cidade A
    printf("Carta A: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu de habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", estadoA, codigoA, nome_cidadeA, populacaoA, areaA, pibA, qtd_pontos_turisticosA, densidade_demograficaA, pib_per_capitaA);

    // Área para entrada de dados - CARTA B
    // estado
    printf("Digite uma letra entre A-H para representar o estado da Carta B: \n");
    scanf(" %c", &estadoB);
    // codigo
    printf("Digite o código da carta (Letra do estado + número entre 01 - 04 Ex 'A01'): \n");
    scanf("%s", &codigoB);
    // nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidadeB);
    // populacao
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacaoB);
    // area
    printf("Digite área da cidade: \n");
    scanf("%f", &areaB);
    // PIB
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibB);
    // quantidade de pontos turisticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &qtd_pontos_turisticosB);

    densidade_demograficaB = (float)populacaoB / areaB;
    pib_per_capitaB = pibB / populacaoB;
    inversoB = (1.0 / densidade_demograficaB);
    superpodorB = (float)qtd_pontos_turisticosB + (float)populacaoB + areaB + pibB + pib_per_capitaB + inversoB;

    //  Área para exibição dos dados da cidade B
    printf("Carta B: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu de habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n\n\n\n\n", estadoB, codigoB, nome_cidadeB, populacaoB, areaB, pibB, qtd_pontos_turisticosB, densidade_demograficaB, pib_per_capitaB);

    // Menu de seleção e duelo
    int escolhaMenu;

    printf("HORA DO DUELO!\n\n");

    // Menu
    printf("Qual característica vamos comparar?");
    printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos\n5. Densidade demográfica\nDigite sua escolha: ");
    scanf("%d", &escolhaMenu);
    // Duelos e resultados

    switch (escolhaMenu)
    {
    case 1:
        printf("%s X %s\n", nome_cidadeA, nome_cidadeB);
        printf("Comparando: População\n");
        printf("%s tem %lu habitantes e %s tem %lu habitantes\n", nome_cidadeA, populacaoA, nome_cidadeB, populacaoB);
        if (populacaoA > populacaoB)
        {
            printf("%s tem mais habitantes e venceu o duelo!\n", nome_cidadeA);
        }
        else if (populacaoA < populacaoB)
        {
            printf("%s tem mais habitanates e venceu o duelo!\n", nome_cidadeB);
        }
        else
        {

            printf("Tivemos um empate!");
        }
        break;
    case 2:
        printf("%s X %s\n", nome_cidadeA, nome_cidadeB);
        printf("Comparando: Área\n");
        printf("%s tem %.2f km² e %s tem %.2f km²\n", nome_cidadeA, areaA, nome_cidadeB, areaB);
        if (areaA > areaB)
        {
            printf("%s é maior e venceu o duelo!\n", nome_cidadeA);
        }
        else if (areaA < areaB)
        {
            printf("%s é maior e venceu o duelo!\n", nome_cidadeB);
        }
        else
        {

            printf("Tivemos um empate!");
        }
        break;
    case 3:
        printf("%s X %s\n", nome_cidadeA, nome_cidadeB);
        printf("Comparando: PIB\n");
        printf("%s tem %.2f de PIB e %s tem %.2f de PIB\n", nome_cidadeA, pibA, nome_cidadeB, pibB);
        if (pibA > pibB)
        {
            printf("%s tem um PIB maior e venceu o duelo!\n", nome_cidadeA);
        }
        else if (pibA < pibB)
        {
            printf("%s tem um PIB maior e venceu o duelo!\n", nome_cidadeB);
        }
        else
        {

            printf("Tivemos um empate!");
        }
        break;
    case 4:
        printf("%s X %s\n", nome_cidadeA, nome_cidadeB);
        printf("Comparando: Quantidade de pontos turísticos\n");
        printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos\n", nome_cidadeA, qtd_pontos_turisticosA, nome_cidadeB, qtd_pontos_turisticosB);
        if (qtd_pontos_turisticosA > qtd_pontos_turisticosB)
        {
            printf("%s tem mais pontos turísticos e venceu o duelo!\n", nome_cidadeA);
        }
        else if (qtd_pontos_turisticosA < qtd_pontos_turisticosB)
        {
            printf("%s tem mais pontos turísticos e venceu o duelo!\n", nome_cidadeB);
        }
        else
        {

            printf("Tivemos um empate!");
        }
        break;
    case 5:
        printf("%s X %s\n", nome_cidadeA, nome_cidadeB);
        printf("Comparando: Densidade Demográfica\n");
        printf("%s tem %.2f habitantes por km² e %s tem %.2f habitantes por km²\n", nome_cidadeA, densidade_demograficaA, nome_cidadeB, densidade_demograficaB);
        if (densidade_demograficaA > densidade_demograficaB)
        {
            printf("%s tem menos habitanates por km² e venceu o duelo!\n", nome_cidadeB);
        }
        else if (densidade_demograficaA < densidade_demograficaB)
        {
            printf("%s tem menos habitanates por km² e venceu o duelo!\n", nome_cidadeA);
        }
        else
        {

            printf("Tivemos um empate!");
        }
        break;
    default:
        printf("Por favor digite um numero válido");
        break;
    }

    return 0;
}
