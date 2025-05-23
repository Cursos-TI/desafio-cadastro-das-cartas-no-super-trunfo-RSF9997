#include <stdio.h>

int main() {
    char pais_01[50], pais_02[50], opcao_01, opcao_02;
    int populacao_01, populacao_02, p_turisticos_01, p_turisticos_02;
    float area_01, area_02, pib_01, pib_02;
    float densi_p01, densi_p02;
    float acao_01=0, acao_02=0;

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

    float ataque01 = populacao_01 + area_01 + pib_01;
    float ataque02 = populacao_02 + area_02 + pib_02;
    float defesa01 = populacao_01 + (pib_01 * p_turisticos_01);
    float defesa02 = populacao_02 + (pib_02 * p_turisticos_02);
    float recuo01 = ((pib_01 + p_turisticos_01) * 2) - densi_p01;
    float recuo02 = ((pib_02 + p_turisticos_02) * 2) - densi_p02;

    // Primeiro atributo
    printf("Escolha o primeiro atributo a ser comparado \n");
    printf("A Ataque \n");
    printf("B Defesa \n");
    printf("C Recuo \n");
    scanf(" %c", &opcao_01);

    // Validar opcao_01
    if (opcao_01 != 'A' && opcao_01 != 'a' && opcao_01 != 'B' && opcao_01 != 'b' && opcao_01 != 'C' && opcao_01 != 'c') {
        printf("Opção inválida \n");
        return 0;
    }

    // Segundo atributo - menu dinâmico, não permite repetir o primeiro
    printf("Escolha o segundo atributo a ser comparado \n");
    if (opcao_01 != 'A' && opcao_01 != 'a') printf("A Ataque \n");
    if (opcao_01 != 'B' && opcao_01 != 'b') printf("B Defesa \n");
    if (opcao_01 != 'C' && opcao_01 != 'c') printf("C Recuo \n");

    scanf(" %c", &opcao_02);

    // Validar opcao_02 e não repetir
    if (opcao_02 != 'A' && opcao_02 != 'a' && opcao_02 != 'B' && opcao_02 != 'b' && opcao_02 != 'C' && opcao_02 != 'c') {
        printf("Opção inválida \n");
        return 0;
    }
    if (opcao_02 == opcao_01 || opcao_02 == (opcao_01 ^ 32)) { 
        printf("Você escolheu o mesmo atributo! \n");
        return 0;
    }

    int resultado_01 = 0, resultado_02 = 0;

    float valor1_op1=0, valor2_op1=0, valor1_op2=0, valor2_op2=0;

    // Função para pegar valores e resultado do primeiro atributo
    switch (opcao_01) {
        case 'A': case 'a':
            valor1_op1 = ataque01;
            valor2_op1 = ataque02;
            resultado_01 = (ataque01 > ataque02) ? 1 : 0;
            break;
        case 'B': case 'b':
            valor1_op1 = defesa01;
            valor2_op1 = defesa02;
            resultado_01 = (defesa01 > defesa02) ? 1 : 0;
            break;
        case 'C': case 'c':
            valor1_op1 = densi_p01;
            valor2_op1 = densi_p02;
            resultado_01 = (densi_p01 < densi_p02) ? 1 : 0; 
            break;
    }

    // Função para pegar valores e resultado do segundo atributo
    switch (opcao_02) {
        case 'A': case 'a':
            valor1_op2 = ataque01;
            valor2_op2 = ataque02;
            resultado_02 = (ataque01 > ataque02) ? 1 : 0;
            break;
        case 'B': case 'b':
            valor1_op2 = defesa01;
            valor2_op2 = defesa02;
            resultado_02 = (defesa01 > defesa02) ? 1 : 0;
            break;
        case 'C': case 'c':
            valor1_op2 = densi_p01;
            valor2_op2 = densi_p02;
            resultado_02 = (densi_p01 < densi_p02) ? 1 : 0; 
            break;
    }

    float soma_p1 = valor1_op1 + valor1_op2;
    float soma_p2 = valor2_op1 + valor2_op2;

    // Resultado final 
    printf("\nComparação entre %s e %s\n", pais_01, pais_02);
    printf("Atributo 1: %.2f x %.2f\n", valor1_op1, valor2_op1);
    printf("Atributo 2: %.2f x %.2f\n", valor1_op2, valor2_op2);
    printf("Soma dos atributos: %.2f x %.2f\n", soma_p1, soma_p2);

    if (soma_p1 > soma_p2) {
        printf("Você Venceu\n");
    } else if (soma_p1 < soma_p2) {
        printf("Você perdeu\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
