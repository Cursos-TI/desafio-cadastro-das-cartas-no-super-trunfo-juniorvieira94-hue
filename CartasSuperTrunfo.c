#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

/*
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/
int main() {
    printf("Desafio Cartas Super Trunfo");
    char estado1[2], codigo_carta1[4], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float Area_km1, pib1;

    char estado2[2], codigo_carta2[4], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float Area_km2, pib2;


    //inicia a pegar os dados da carta 1
    printf("\nInsira os dados da carta 1\n");

    printf("Insira o Estado: ");
    scanf("%s", &estado1);

    printf("Insira o codigo da carta: ");
    scanf("%s", &codigo_carta1);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Insira a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Insira a Area em KM quadrado: ");
    scanf("%f", &Area_km1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);


    //inicia a pegar os dados da carta 2
    printf("\nInsira os dados da carta 2\n");

    printf("Insira o Estado: ");
    scanf("%s", &estado2);

    printf("Insira o codigo da carta: ");
    scanf("%s", &codigo_carta2);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Insira a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a Area em KM quadrado: ");
    scanf("%f", &Area_km2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);


    //Mostra os dados da carta 1
    printf("\nDados da Carta 1");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo: %s", codigo_carta1);
    printf("\nNome da Cidade: %s", nome_cidade1);
    printf("\nPopulcao: %d", populacao1);
    printf("\nArea: %f", Area_km1);
    printf("\nPIB: %f", pib1);
    printf("\nNumero de pontos turisticos: %d", pontos_turisticos1);

    //Mostra os dados da carta 2
    printf("\n\nDados da Carta 2");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo: %s", codigo_carta2);
    printf("\nNome da Cidade: %s", nome_cidade2);
    printf("\nPopulcao: %d", populacao2);
    printf("\nArea: %f", Area_km2);
    printf("\nPIB: %f", pib2);
    printf("\nNumero de pontos turisticos: %d", pontos_turisticos2);


    return 0;
}
