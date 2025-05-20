#include <stdio.h>
#include <string.h>

int main() {
    // dados da carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibPerCapita1;

    // dados da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibPerCapita2;

    // cadastro da carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
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

    // cadastro da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
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

    // cálculos 
    densidadepopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    densidadepopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);

    // menu de comparação
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s:\n", nomeCidade1, nomeCidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Valores: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("Valores: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if (area2 > area1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Valores: %.2f bilhões vs %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if (pib2 > pib1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Valores: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR vence)\n");
            printf("Valores: %.2f hab/km² vs %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if (densidadepopulacional2 < densidadepopulacional1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default:
            printf("Opção inválida! Escolha entre 1 e 5.\n");
            break;
    }

    return 0;
}
