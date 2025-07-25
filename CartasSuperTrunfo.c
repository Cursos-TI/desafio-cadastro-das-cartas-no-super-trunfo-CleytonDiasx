#include <stdio.h>

int main() {
    //dados para carta 1
    int populacao, pontos_turisticos;
    float area, pib;
    char cidade[20];  //nome da cidade
    char estado[20];  //nome do estado
    char codigo[20];  // codigo da cidade

    //coleta os dados da carta 1
    printf("Dados da Carta 1:\n");
    printf("Digite o estado: ");
    scanf(" %s", estado);  // espaço antes para ignorar '\n'

    //coleta os dados da carta 1
    printf("Digite o codigo: ");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao);

    printf("Area (em km2): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\n"); //quebra de linha invisivel para separar na compilacao

    // apresentacao da carta 1
    printf("CARTA 1: \n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f Km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);

    printf("\n"); //quebra de linha invisivel para separar na compilacao

    //dados para carta 2
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    char cidade2[50];  //nome da cidade
    char estado2[10];  //nome do estado
    char codigo2[20];  // codigo da cidade
    
    //dados da carta 2
    printf("Dados da Carta 2:\n");
    printf("Digite o estado: ");
    scanf(" %s", estado2);  // espaço antes para ignorar '\n'

    //coleta dos dados da carta 2
    printf("Digite o codigo: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n"); //quebra de linha invisivel para separar na compilacao

    // apresentacao da carta 2
    printf("CARTA 2:\n ");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);

    return 0; 
}