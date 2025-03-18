#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Declaração das variáveis para a primeira carta
    char estado1[2];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1, pib1, pibPerCapita1, densidadePopulacional1, superPoder1;
    int pontos_turisticos1;

    // Declaração das variáveis para a segunda carta
    char estado2[2];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2, pib2, pibPerCapita2, densidadePopulacional2, superPoder2;
    int pontos_turisticos2;

    // Entrada dos dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]%*c", &estado1);  // O espaço antes de %c ignora qualquer caractere de nova linha
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade1);  // Permite a entrada de uma string com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calculando a densidade populacional e PIB per capita para a segunda cidade
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em reais, não bilhões

    // Calculando o Super Poder para a primeira cidade
    superPoder1 = (float)(populacao1 + area1 + pib1 * 1000000000 + pontos_turisticos1 + pibPerCapita1 + (1.0 / densidadePopulacional1));

    // Entrada dos dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]%*c", &estado2);  // O espaço antes de %c ignora qualquer caractere de nova linha
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade2);  // Permite a entrada de uma string com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando a densidade populacional e PIB per capita para a segunda cidade
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB em reais, não bilhões

    // Calculando o Super Poder para a segunda cidade
    superPoder2 = (float)(populacao2 + area2 + pib2 * 1000000000 + pontos_turisticos2 + pibPerCapita2 + (1.0 / densidadePopulacional2));

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Comparação de Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);

    // Comparação de Densidade Populacional
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional2 > densidadePopulacional1);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    //---------------------------------------------------------------------------------------------------------------------------

    printf("\n\nEscolha o primeiro atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per capita\n");

    return 0;
}
