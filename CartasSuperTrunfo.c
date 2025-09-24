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

/*
Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
*/
int main() {
    printf("Desafio Cartas Super Trunfo");
    char estado1[2], codigo_carta1[2], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float Area_km1, pib1, calc_desidade_populacional1, calc_pib_percapta1, superpoder1;

    char estado2[2], codigo_carta2[2], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float Area_km2, pib2, calc_desidade_populacional2, calc_pib_percapta2, superpoder2;
     
  

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

    // calculos carta 1
    calc_desidade_populacional1 =  populacao1 / Area_km1;
    calc_pib_percapta1 = pib1 / populacao1;
    superpoder1 = populacao1 + Area_km1 + pib1 + calc_pib_percapta1 + (calc_desidade_populacional1/1);

    //Mostra os dados da carta 1
    printf("\nDados da Carta 1");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo: %s", codigo_carta1);
    printf("\nNome da Cidade: %s", nome_cidade1);
    printf("\nPopulcao: %d", populacao1);
    printf("\nArea: %f", Area_km1);
    printf("\nPIB: %f", pib1);
    printf("\nNumero de pontos turisticos: %d", pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f", calc_desidade_populacional1);
    printf("\nPIB per Capita: %.2f", calc_pib_percapta1);
    printf("\nSuper Poder: %.2f", superpoder1);


    // calculos carta 2
    calc_desidade_populacional2 =  populacao2 / Area_km2;
    calc_pib_percapta2 = pib2 / populacao2;
    superpoder2 = populacao2 + Area_km2 + pib2 + calc_pib_percapta2 + (calc_desidade_populacional2/1);

    //Mostra os dados da carta 2
    printf("\n\nDados da Carta 2");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo: %s", codigo_carta2);
    printf("\nNome da Cidade: %s", nome_cidade2);
    printf("\nPopulcao: %d", populacao2);
    printf("\nArea: %f", Area_km2);
    printf("\nPIB: %f", pib2);
    printf("\nNumero de pontos turisticos: %d", pontos_turisticos2);
    printf("\nDensidade Populaciona: %.2f", calc_desidade_populacional2);
    printf("\nPIB per Capita: %.2f", calc_pib_percapta2);
    printf("\nSuper Poder: %.2f", superpoder1);

    //COMPARACOES
    int compara_populacao, compara_pontos_turisticos;
    float compara_pib, compara_area, compara_densidade_populacional, compara_pib_percapita, compara_superpoder;
   
    compara_populacao=populacao1>populacao2;
    compara_area=Area_km1>Area_km2;
    compara_pib=pib1>pib2;
    compara_pontos_turisticos=pontos_turisticos1>pontos_turisticos2;
    compara_densidade_populacional=calc_desidade_populacional1>calc_desidade_populacional2;
    compara_pib_percapita=calc_pib_percapta1>calc_pib_percapta2;
    compara_superpoder=superpoder1>superpoder2;

    //mostrar comparacoes
    printf("\n\nComparações das Cartas");
    printf("\nLegenda 1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence");
    printf("\nPopulcao: %d", compara_populacao);
    printf("\nArea: %f", compara_area);
    printf("\nPIB: %f", compara_pib);
    printf("\nNumero de pontos turisticos: %d", compara_pontos_turisticos);
    printf("\nDensidade Populaciona: %.2f", compara_densidade_populacional);
    printf("\nPIB per Capita: %.2f", compara_pib_percapita);
    printf("\nSuper Poder: %.2f", compara_superpoder);


    return 0;
}


