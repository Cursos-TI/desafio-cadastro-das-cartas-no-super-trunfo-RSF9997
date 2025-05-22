#include <stdio.h>

int main() {
    char pais_01[50], pais_02[50], opcao_01, opcao_02;
    int populacao_01, populacao_02, p_turisticos_01, p_turisticos_02, resultado_01, resultado_02;
    float area_01, area_02, pib_01, pib_02;
    float densi_p01, densi_p02;
    float acao_01, acao_02, somadaacao_01, somadaacao_02;

    printf("Digite as informações para a Cidade 1:\n");
    printf("Nome do Pais: ");
    scanf("%s", pais_01);
    printf("População: ");
    scanf("%d", &populacao_01);
    printf("Área (em km²): ");
    scanf("%f", &area_01);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib_01);
    printf("Número de pontos turísticos: ");
    scanf("%d", &p_turisticos_01);

    printf("\nDigite as informações para a Cidade 2:\n");
    printf("Nome do Pais: ");
    scanf("%s", pais_02);
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

    float ataque01 = (float) populacao_01 + area_01 + pib_01;
    float ataque02 = (float) populacao_02 + area_02 + pib_02;

    float defesa01 = (float) populacao_01 + (pib_01 * p_turisticos_01);
    float defesa02 = (float) populacao_02 + (pib_02 * p_turisticos_02);

    float recuo01 = (float) ((pib_01 + p_turisticos_01) * 2) - densi_p01;
    float recuo02 = (float) ((pib_02 + p_turisticos_02) * 2) - densi_p02;

    printf("Escolha o primeiro atributo a ser comparado \n");
    printf("A Ataque \n");
    printf("B Defesa \n");
    printf("C Recuo \n");
    scanf(" %c", &opcao_01);

    switch (opcao_01) {
        case 'A':
        case 'a':
            printf("Você escolheu a opção Ataque! \n");
            resultado_01 = ataque01 > ataque02 ? 1 : 0;
            acao_01 = ataque01;
            acao_02 = ataque02;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu a opção Defesa! \n");
            resultado_01 = defesa01 > defesa02 ? 1 : 0;
            acao_01 = defesa01;
            acao_02 = defesa02;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu a opção Recuo! \n");
            resultado_01 = recuo01 > recuo02 ? 1 : 0;
            acao_01 = recuo01;
            acao_02 = recuo02;
            break;
        default:
            printf("Opção invalida \n");
            return 0;
    }

    printf("Escolha o segundo atributo a ser comparado \n");
    // menu dinâmico: remove opção já usada
    if (opcao_01 != 'A' && opcao_01 != 'a') printf("A Ataque \n");
    if (opcao_01 != 'B' && opcao_01 != 'b') printf("B Defesa \n");
    if (opcao_01 != 'C' && opcao_01 != 'c') printf("C Recuo \n");
    scanf(" %c", &opcao_02);

    // impedir repetição
    if ((opcao_01 == opcao_02) || (opcao_01 + 32 == opcao_02) || (opcao_01 - 32 == opcao_02)) {
        printf("Você escolheu o mesmo atributo! \n");
        return 0;
    } else {
        switch (opcao_02) {
            case 'A':
            case 'a':
                printf("Você escolheu a opção Ataque! \n");
                resultado_02 = ataque01 > ataque02 ? 1 : 0;
                somadaacao_01 = acao_01 + ataque01;
                somadaacao_02 = acao_02 + ataque02;
                break;
            case 'B':
            case 'b':
                printf("Você escolheu a opção Defesa! \n");
                resultado_02 = defesa01 > defesa02 ? 1 : 0;
                somadaacao_01 = acao_01 + defesa01;
                somadaacao_02 = acao_02 + defesa02;
                break;
            case 'C':
            case 'c':
                printf("Você escolheu a opção Recuo! \n");
                resultado_02 = recuo01 > recuo02 ? 1 : 0;
                somadaacao_01 = acao_01 + recuo01;
                somadaacao_02 = acao_02 + recuo02;
                break;
            default:
                printf("Opção invalida \n");
                return 0;
        }
    }

    // Resultado final baseado na soma dos dois atributos
    printf("\n--- RESULTADO ---\n");
    printf("Pais 1: %s | Atributos: %.2f + %.2f = %.2f\n", pais_01, acao_01, somadaacao_01 - acao_01, somadaacao_01);
    printf("Pais 2: %s | Atributos: %.2f + %.2f = %.2f\n", pais_02, acao_02, somadaacao_02 - acao_02, somadaacao_02);

    if (somadaacao_01 > somadaacao_02) {
        printf("Resultado: Você Venceu!\n");
    } else if (somadaacao_01 < somadaacao_02) {
        printf("Resultado: Você Perdeu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
