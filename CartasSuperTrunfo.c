#include <stdio.h>

// Desafio Super Trunfo - Paises
// Tema 1 - Cadastro das Cartas
// Nivel Mestre: Cadastro Basico + Calculo de Atributos + Comparacao e Super Poder

int main() {
    // Definicao das variaveis para as duas cartas
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Variaveis para atributos calculados
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    
    // Variaveis para comparacao
    int vence_populacao, vence_area, vence_pib, vence_pontos_turisticos;
    int vence_densidade, vence_pib_per_capita, vence_super_poder;
    
    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a area (km2): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em milhoes): ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Calculo dos atributos adicionais para Carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidade_populacional1) + pib_per_capita1;
    
    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o codigo da cidade (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a area (km2): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em milhoes): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Calculo dos atributos adicionais para Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidade_populacional2) + pib_per_capita2;
    
    // Exibicao dos dados da Carta 1
    printf("\n=== Dados da Carta 1 (%s) ===\n", codigo1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Exibicao dos dados da Carta 2
    printf("\n=== Dados da Carta 2 (%s) ===\n", codigo2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Comparacao entre as cartas
    printf("\n=== Comparacao entre as Cartas ===\n");
    
    // Populacao (maior vence)
    vence_populacao = (populacao1 > populacao2) ? 1 : 2;
    printf("Populacao: Carta %d vence\n", vence_populacao);
    
    // Area (maior vence)
    vence_area = (area1 > area2) ? 1 : 2;
    printf("Area: Carta %d vence\n", vence_area);
    
    // PIB (maior vence)
    vence_pib = (pib1 > pib2) ? 1 : 2;
    printf("PIB: Carta %d vence\n", vence_pib);
    
    // Pontos Turisticos (maior vence)
    vence_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2;
    printf("Pontos Turisticos: Carta %d vence\n", vence_pontos_turisticos);
    
    // Densidade Populacional (menor vence)
    vence_densidade = (densidade_populacional1 < densidade_populacional2) ? 1 : 2;
    printf("Densidade Populacional: Carta %d vence\n", vence_densidade);
    
    // PIB per Capita (maior vence)
    vence_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 2;
    printf("PIB per Capita: Carta %d vence\n", vence_pib_per_capita);
    
    // Super Poder (maior vence)
    vence_super_poder = (super_poder1 > super_poder2) ? 1 : 2;
    printf("Super Poder: Carta %d vence\n", vence_super_poder);
    
    return 0;
}