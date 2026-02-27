#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <stdlib.h>  // Biblioteca padrão de utilitários

int main() {

    // Declaração dos dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];     // Ex: A01
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    printf("===========================================\n");
    printf(" Bem-vindo ao jogo Super Trunfo de Cidades\n");
    printf("===========================================\n");

    // Cadastro da Carta 1
    printf("\n---- CADASTRO DA CARTA 1 ----\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf(" %4s", codigo1);

    getchar(); // Limpa o buffer

    printf("Cidade: ");
    fgets(cidade1, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (Km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro da Carta 2
    printf("\n---- CADASTRO DA CARTA 2 ----\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %4s", codigo2);

    getchar(); // Limpa o buffer

    printf("Cidade: ");
    fgets(cidade2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (Km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n===========================================\n");
    printf(" SUAS CARTAS FORAM CADASTRADAS COM SUCESSO!\n");
    printf("===========================================\n");

    // Exibição da Carta 1
    printf("\n---> CARTA 1 <---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    // Exibição da Carta 2
    printf("\n---> CARTA 2 <---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}