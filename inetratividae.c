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



    int opcao;
    printf("\nEscolha Atributo Para Comparação:\n");
    printf("\n1.POPULAÇÃO\n");
    printf("\n2.ÁREA\n");
    printf("\nPIB\n");
    printf("\nNÚMEROS DE PONTOS TURÍSTICOS\n");
    printf("\nDENSIDADE POPULACIONAL\n");
    printf("\nOPÇÃO: \n");
    scanf("%d", &opcao);


    printf("\nComparando %s e %s: \n", nomeCidade1, nomeCidade2);

    switch (opcao){

    case 1: 
        printf("População: %lu vs %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2 ) printf("Vencedor: %s\n", nomeCidade1);
        else if (populacao1 < populacao2 ) printf("Vencedor: %s\n", nomeCidade2);
        else printf("EMPATE!\n");  
        break;

    case 2: 
        printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
        if (area1 > area2 ) printf("Vencedor: %s\n", nomeCidade1);
        else if (area1 < area2 ) printf("Vencedor: %s\n", nomeCidade2);
        else printf("EMPATE!\n");  
        break;


    case 3: 
        printf("PIB: %.2f bilhões vs %.2f bilhões\n", pib1, pib2);
        if (pib1 > pib2 ) printf("Vencedor: %s\n", nomeCidade1);
        else if (pib1 < pib2 ) printf("Vencedor: %s\n", nomeCidade2);
        else printf("EMPATE!\n");  
        break;


    case 4: 
        printf("PONTOS TURISTICOS: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2 ) printf("Vencedor: %s\n", nomeCidade1);
        else if (pontosTuristicos1 < pontosTuristicos2 ) printf("Vencedor: %s\n", nomeCidade2);
        else printf("EMPATE!\n");  
        break;


    case 5: 
        printf("DENSIDADE POPULACIONAL: %.2f vs %.2f\n", densidadepopulacional1, densidadepopulacional2);
        if (densidadepopulacional1 < densidadepopulacional2 ) printf("Vencedor: %s\n", nomeCidade1);
        else if (densidadepopulacional1 > densidadepopulacional2 ) printf("Vencedor: %s\n", nomeCidade2);
        else printf("EMPATE!\n");  
        break;

    
    
    default:
    printf("Opção inválida! Escolha entre 1 e 5.\n");
            break;
    }
    return 0;
}