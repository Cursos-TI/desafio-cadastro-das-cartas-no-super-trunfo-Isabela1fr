#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //variáveis separadas para cada atributo da cidade.
    // primeira carta

    char estado1[20];
    char codigo1[20];
    char nome1[30];
    int populacao1, turismo1;
    float area1, pib1;

    // Cadastro das Cartas:
    printf("\n -----Informações da primeira carta---- \n");
    printf("Digite o estado da cidade: ");
    scanf("%19s", estado1);

    printf("Digite o código da cidade: ");
    scanf("%19s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %29s", nome1);

    printf("Digite qual é a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("Digite qual é a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite qual é o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);

    // segunda carta
    //variáveis separadas para cada atributo da cidade
    printf("\n -----Informações da segunda carta---- \n");

    char estado2[20];
    char codigo2[20];
    char nome2[30];
    int populacao2, turismo2;
    float area2, pib2;

    // Cadastro das Cartas:

    printf("Digite o estado da cidade: ");
    scanf("%19s", estado2);

    printf("Digite o código da cidade: ");
    scanf("%19s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %29s", nome2);

    printf("Digite qual é a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turismo2);

    printf("Digite qual é a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite qual é o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);


    

    return 0;
}
