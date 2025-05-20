#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibPerCapita1;
    float superPoder1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibPerCapita2;
    float superPoder2;

    
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de Reais: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadepopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    densidadepopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;




    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadepopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadepopulacional2);

    
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf(" Pib Per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    


    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf(" Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf(" Pib Per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);




    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 Venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 Venceu (%d)\n", area1 > area2);
    printf("Pib: Carta 1 Venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 Venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 Venceu (%d)\n", densidadepopulacional1 > densidadepopulacional2);
    printf("PibPerCapita: Carta 1 Venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("SuperPoder: Carta 1 Venceu (%d)\n", superPoder1 > superPoder2);

    if (populacao1 > populacao2){
        printf("Resultado: A Carta 1 (%s) Venceu!\n", nomeCidade1);
    }else if (populacao1 < populacao2){
        printf("Resultado: A Carta 2 (%s) Venceu!\n", nomeCidade2);

    } else {
        printf("Resultado: Empate!\n");
    };


    return 0;
}