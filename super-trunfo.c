#include <stdio.h>

int main() {
    int population, turistic_points, population2, turistic_points2;
    char state, code[5], city[50], state2, code2[5], city2[50];
    float area, pib, area2, pib2;
    
    // Input
    
    // Carta 1
    printf("• Registre sua carta • \n");
    printf("Carta 1 \n");
    printf("Estado: ");
    scanf(" %c", &state);
    printf("Código: ");
    scanf(" %4s", code);
    printf("Cidade: ");
    scanf(" %49[^\n]", city);
    printf("População: ");
    scanf("%d", &population);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &turistic_points);
    
    // Carta 2
    printf("\nCarta 2 \n");
    printf("Estado: ");
    scanf(" %c", &state2);
    printf("Código: ");
    scanf(" %4s", code2);
    printf("Cidade: ");
    scanf(" %49[^\n]", city2);
    printf("População: ");
    scanf("%d", &population2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &turistic_points2);
    
    // Output
    printf("\nCarta 1: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d \n", state, code, city, population, area, pib, turistic_points);
    printf("\nCarta 2: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d \n", state2, code2, city2, population2, area2, pib2, turistic_points2);
    
    return 0;
}


/*
• Saída Esperada •

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50


Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30    
*/