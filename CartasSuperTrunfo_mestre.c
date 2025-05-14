#include <stdio.h>

int main() {
    char estado_01, estado_02, codigo_01[10], codigo_02[10], cidade_01[50], cidade_02[50];
    int populacao_01, populacao_02, p_turisticos_01, p_turisticos_02;
    float area_01, area_02, pib_01, pib_02;
    float densi_p01, densi_p02, pib_per01, pib_per02;

 
    printf("Digite as informações para a Cidade 1:\n");

    printf("Estado (uma letra): ");
    scanf(" %c", &estado_01);

    printf("Código: ");
    scanf("%s", codigo_01);

    printf("Nome da cidade: ");
    scanf("%s", cidade_01);

    printf("População: ");
    scanf("%d", &populacao_01);

    printf("Área (em km²): ");
    scanf("%f", &area_01);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib_01);

    printf("Número de pontos turísticos: ");
    scanf("%d", &p_turisticos_01);

  
    printf("\nDigite as informações para a Cidade 2:\n");

    printf("Estado (uma letra): ");
    scanf(" %c", &estado_02);

    printf("Código: ");
    scanf("%s", codigo_02);

    printf("Nome da cidade: ");
    scanf("%s", cidade_02);

    printf("População: ");
    scanf("%d", &populacao_02);

    printf("Área (em km²): ");
    scanf("%f", &area_02);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib_02);

    printf("Número de pontos turísticos: ");
    scanf("%d", &p_turisticos_02);

    
    densi_p01 = populacao_01 / area_01; 
    densi_p02 = populacao_02 / area_02;

    pib_per01 = (pib_01 * 1000000000.0) / populacao_01; 
    pib_per02 = (pib_02 * 1000000000.0) / populacao_02;

    
    float s_poder01 = (float)populacao_01 + area_01 + pib_01 + pib_per01 + (float)p_turisticos_01 + (area_01 / populacao_01); 
    float s_poder02 = (float)populacao_02 + area_02 + pib_02 + pib_per02 + (float)p_turisticos_02 + (area_02 / populacao_02); 

    
    printf("\nComparação de Cartas:\n");
    printf("População: Carta (%d) venceu.\n", populacao_01 > populacao_02);
    printf("Área: Carta (%d) venceu.\n", area_01 > area_02);
    printf("PIB: Carta (%d) venceu.\n", pib_01 > pib_02);
    printf("Pontos Turísticos: Carta (%d) venceu.\n", p_turisticos_01 > p_turisticos_02);
    printf("Densidade Populacional: Carta (%d) venceu.\n", densi_p01 > densi_p02);
    printf("PIB per Capita: Carta (%d) venceu.\n", pib_per01 > pib_per02);
    printf("Super Poder: Carta (%d) venceu.\n", s_poder01 > s_poder02);

    return 0;
}
