//novo commit
#include <stdio.h>
#include <stdlib.h> 

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    char buffer[100]; 

    //Leitura dos dados da Carta 1
    printf(" Olá, você está no jogo Super Trunfo. Meu nome é Vinícius. Vamos começar. Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado1);

    printf("Codigo (ex: A01): \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %s", codigo1);

    printf("Nome da Cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; 

    printf("Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao1);

    printf("Area (km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area1);

    printf("PIB: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontos_turisticos1);

    // Leitura dos dados da Carta 2 
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado2);

    printf("Codigo (ex: B02): \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %s", codigo2);

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; 

    printf("Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao2);

    printf("Area(km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area2);

    printf("PIB:");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontos_turisticos2);


    // Exibição dos dados da Carta 1 e Carta 2 ao final
    printf("\nDados das Cartas Digitadas:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}

