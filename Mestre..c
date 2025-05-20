#include <stdio.h>
#include <string.h>

int main() {
    // dados da carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // dados da carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

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
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;


    //exibição
    printf("\nCartas cadastradas com sucesso!\n");

    //menu de seleção
    int op1 = 0, op2 = 0;
    do
    {
        printf(" \nEscolha o Primeiro Atributo para comparar:\n");
        printf("1 - População \n2 - Área\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
        printf("Opção: ");
        scanf("%d", &op1);
        switch (op1)
        {
        case 1:  case 2: case 3: case 4: case 5: break;
        default: printf("Opção Invalida!\n"); op1 = 0;
        }
    } while (op1 == 0 );

    do
    {
       printf("\n Escolha o Segundo Atributo para comparar ( diferente do primeiro)");
       for ( int i = 1; i <=5; i++){
        if ( i != op1 ) {
            switch (i) {
            case 1: printf(" 1 - População\n"); break;
            case 2: printf(" 2 - Área\n"); break;
            case 3: printf(" 3 - PIB\n"); break;
            case 4: printf(" 4 - Pontos Turisticos\n"); break;
            case 5: printf(" 5 - Densidade Demografica\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &op2);
    if (op2 == op1 || op2 < 1 || op2 > 5 ){

        printf("Opção Invalida!\n");
        op2 = 0;
    }
} while (op2 == 0);

float valor1_attr1 = 0, valor2_attr1 = 0, valor1_attr2 = 0, valor2_attr2 = 0;

char nomeAttr1[30], nomeAttr2[30];

switch (op1) {
case 1: valor1_attr1 =  populacao1; valor2_attr1 = populacao2; strcpy(nomeAttr1, "População"); break;
case 2: valor1_attr1 = area1; valor2_attr1 = area2; strcpy(nomeAttr1, "Área"); break;
case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; strcpy(nomeAttr1, "PIB"); break;
case 4: valor1_attr1 = pontosTuristicos1; valor2_attr1 = pontosTuristicos2; strcpy(nomeAttr1, "Pontos Turisticos"); break;
case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; strcpy(nomeAttr1, "Densidade Demografica"); break;
}

switch (op2) {
case 1: valor1_attr2 =  populacao1; valor2_attr2 = populacao2; strcpy(nomeAttr2, "População"); break;
case 2: valor1_attr2 = area1; valor2_attr2 = area2; strcpy(nomeAttr2, "Área"); break;
case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; strcpy(nomeAttr2, "PIB"); break;
case 4: valor1_attr2 = pontosTuristicos1; valor2_attr2 = pontosTuristicos2; strcpy(nomeAttr2, "Pontos Turisticos"); break;
case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; strcpy(nomeAttr2, "Densidade Demografica"); break;
}

printf("\nComparando %s e %s:\n", nomeCidade1, nomeCidade2);
printf("\n%-25s: %.2f vs %.2f", nomeAttr1, valor1_attr1, valor2_attr1);
printf("\n%-25s: %.2f vs %.2f\n", nomeAttr2, valor1_attr2, valor2_attr2);

//atributo1
int pontos1 = 0, pontos2 = 0;

if (op1 == 5 ) {
   pontos1 += (valor1_attr1 < valor2_attr1) ? 1 : 0;
   pontos2 += (valor2_attr1 < valor1_attr1) ? 1 : 0;
} else {   
    pontos1 += (valor1_attr1 > valor2_attr1) ? 1 : 0;
    pontos2 += (valor2_attr1 > valor1_attr1) ? 1 : 0;
}

//atributo2
if (op2 == 5 ) {
   pontos1 += (valor1_attr2 < valor2_attr2) ? 1 : 0;
   pontos2 += (valor2_attr2 < valor1_attr2) ? 1 : 0;
} else {   
    pontos1 += (valor1_attr2 > valor2_attr2) ? 1 : 0;
    pontos2 += (valor2_attr2 > valor1_attr2) ? 1 : 0;
}
//soma dos valores

float soma1 = valor1_attr1 + valor1_attr2;
float soma2 = valor2_attr1 + valor2_attr2;

printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", nomeCidade1, soma1, nomeCidade2, soma2);

//resultadofinal

if (soma1 > soma2){
    printf("\nVencedor: %s\n", nomeCidade1);
}else if (soma2 > soma1){
   printf("\nVencedor: %s\n", nomeCidade2);
} else {
    printf("\nEmpate!\n");
}
return 0;
}
