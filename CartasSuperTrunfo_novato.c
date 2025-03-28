#include <stdio.h>
int main (){
    
    char estado_01, estado_02, codigo_01[10], codigo_02[10], cidade_01[50], cidade_02[50];
    int populacao_01, populacao_02; 
    float area_01, area_02, pib_01, pib_02; 
    
    // Coleta de dados para a Cidade 1
    printf("Cidade 1:\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_01); // Lê a letra do estado da cidade 1

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_01); // Lê o código da carta da cidade 1

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_01); // Lê o nome da cidade 1

    printf("Digite o numero de habitantes: ");
    scanf("%i", &populacao_01); // Lê a população da cidade 1

    printf("Digite a area da cidade em Km quadrados: ");
    scanf("%f", &area_01); // Lê a área da cidade 1

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_01); // Lê o PIB da cidade 1
    
    // Coleta de dados para a Cidade 2
    printf("\nCidade 2\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_02); // Lê a letra do estado da cidade 2

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_02); // Lê o código da carta da cidade 2

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_02); // Lê o nome da cidade 2

    printf("Digite o numero de habitantes: ");
    scanf("%i", &populacao_02); // Lê a população da cidade 2

    printf("Digite a area da cidade em Km quadrados: ");
    scanf("%f", &area_02); // Lê a área da cidade 2

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_02); // Lê o PIB da cidade 2
    
    // Impressão dos dados da Cidade 1
    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome: %s\nPopulação: %i\nArea: %.1fkm²\nPIB: %.1f R$\n",
           estado_01, codigo_01, cidade_01, populacao_01, area_01, pib_01); // Exibe os dados da cidade 1

    // Impressão dos dados da Cidade 2
    printf("\nCarta 2:\nEstado: %c\nCodigo: %s\nNome: %s\nPopulação: %i\nArea: %.1fkm²\nPIB: %.1f R$",
           estado_02, codigo_02, cidade_02, populacao_02, area_02, pib_02); // Exibe os dados da cidade 2
    
    return 0; // Fim do programa
}