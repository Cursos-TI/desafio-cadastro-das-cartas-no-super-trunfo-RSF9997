#include <stdio.h>

int main (){
    char estado_01, estado_02, codigo_01[10], codigo_02[10], cidade_01[50], cidade_02[50];
    int populacao_01, populacao_02, p_turisticos_01, p_turisticos_02;
    float area_01, area_02, pib_01, pib_02;
    float densi_p01, densi_p02, pib_per01, pib_per02;

    printf ("Cidade 1:\n");

    printf ("Digite a letra do estado: ");
    scanf (" %c", &estado_01);

    printf ("Digite o codigo da carta: ");
    scanf ("%s", codigo_01);

    printf ("Digite o nome da cidade: ");
    scanf ("%s", cidade_01);

    printf ("Digite o numero de habitantes: ");
    scanf ("%i", &populacao_01);

    printf ("Digite a area da cidade em Km quadrados: ");
    scanf ("%f", &area_01);

    printf ("Digite o PIB da cidade (em bilhões): ");
    scanf  ("%f", &pib_01);

    printf ("Digite o numero de pontos turisticos: ");
    scanf ("%d", &p_turisticos_01);

    printf ("\nCidade 2\n");

    printf ("Digite a letra do estado: ");
    scanf (" %c", &estado_02);

    printf ("Digite o codigo da carta: ");
    scanf ("%s", codigo_02);

    printf ("Digite o nome da cidade: ");
    scanf ("%s", cidade_02);

    printf ("Digite o numero de habitantes: ");
    scanf ("%i", &populacao_02);

    printf ("Digite a area da cidade em Km quadrados: ");
    scanf ("%f", &area_02);

    printf ("Digite o PIB da cidade (em bilhões): ");
    scanf  ("%f", &pib_02);

    printf ("Digite o numero de pontos turisticos: ");
    scanf ("%d", &p_turisticos_02);

    densi_p01 = (float) populacao_01 / area_01;
    densi_p02 = (float) populacao_02 / area_02;
    pib_per01 = (pib_01 * 1000000000.0) / populacao_01;
    pib_per02 = (pib_02 * 1000000000.0) / populacao_02;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_01);
    printf("Código: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("População: %i\n", populacao_01);
    printf("Área: %.2f km²\n", area_01);
    printf("PIB: %.2f bilhões de reais\n", pib_01);
    printf("Número de Pontos Turísticos: %d\n", p_turisticos_01);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_p01);
    printf("PIB per Capita: %.2f reais\n", pib_per01);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_02);
    printf("Código: %s\n", codigo_02);
    printf("Nome da Cidade: %s\n", cidade_02);
    printf("População: %i\n", populacao_02);
    printf("Área: %.2f km²\n", area_02);
    printf("PIB: %.2f bilhões de reais\n", pib_02);
    printf("Número de Pontos Turísticos: %d\n", p_turisticos_02);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_p02);
    printf("PIB per Capita: %.2f reais\n", pib_per02);

    return 0;
}
