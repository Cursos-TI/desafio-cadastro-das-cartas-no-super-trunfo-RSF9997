#include <stdio.h>

int main() {
    // Declaração de variáveis para as duas cidades
    char estado_01, estado_02, codigo_01[10], codigo_02[10], cidade_01[50], cidade_02[50];
    unsigned long int populacao_01, populacao_02;
    int p_turisticos_01, p_turisticos_02;
    float area_01, area_02, pib_01, pib_02;
    float densi_p01, densi_p02, pib_per01, pib_per02;
    float s_poder01, s_poder02;

    // Leitura dos dados da Cidade 1
    printf("Digite as informações para a Cidade 1:\n");
    scanf(" %c", &estado_01);
    scanf("%s", codigo_01);
    scanf("%s", cidade_01);
    scanf("%lu", &populacao_01);
    scanf("%f", &area_01);
    scanf("%f", &pib_01);
    scanf("%d", &p_turisticos_01);

    // Leitura dos dados da Cidade 2
    printf("\nDigite as informações para a Cidade 2:\n");
    scanf(" %c", &estado_02);
    scanf("%s", codigo_02);
    scanf("%s", cidade_02);
    scanf("%lu", &populacao_02);
    scanf("%f", &area_02);
    scanf("%f", &pib_02);
    scanf("%d", &p_turisticos_02);

    // Cálculo da densidade populacional e PIB per capita de cada cidade
    densi_p01 = populacao_01 / area_01;
    densi_p02 = populacao_02 / area_02;
    pib_per01 = (pib_01 * 1e9) / populacao_01;
    pib_per02 = (pib_02 * 1e9) / populacao_02;

    // Cálculo do "super poder" de cada cidade
    s_poder01 = (float)populacao_01 + area_01 + pib_01 + pib_per01 + (float)p_turisticos_01 + (1.0 / densi_p01);
    s_poder02 = (float)populacao_02 + area_02 + pib_02 + pib_per02 + (float)p_turisticos_02 + (1.0 / densi_p02);

    // Comparação dos atributos e impressão do resultado
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao_01 > populacao_02);
    printf("Área: Carta 1 venceu (%d)\n", area_01 > area_02);
    printf("PIB: Carta 1 venceu (%d)\n", pib_01 > pib_02);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", p_turisticos_01 > p_turisticos_02);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densi_p01 < densi_p02); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per01 > pib_per02);
    printf("Super Poder: Carta 1 venceu (%d)\n", s_poder01 > s_poder02);

    return 0;
}
