#include <stdio.h>

int main() {

    // Variáveis
    unsigned long int populacao01, populacao02;
    int pontosturisticos01, pontosturisticos02;
    float area01, area02, PIB01, PIB02;

    char estado01[50], estado02[50], nome01[50], nome02[50], codigo01[50], codigo02[50];

    // Variáveis calculadas
    float densidade01, densidade02, pibpercapita01, pibpercapita02;
    float superpoder01, superpoder02;

    // ================= CARTA 1 =================

    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado01);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome01);

    printf("Digite o código da cidade: \n");
    scanf(" %[^\n]", codigo01);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao01);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area01);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB01);

    printf("Digite os pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos01);

    // ================= CARTA 2 =================

    printf("\nDigite o nome do estado: \n");
    scanf(" %[^\n]", estado02);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome02);

    printf("Digite o código da cidade: \n");
    scanf(" %[^\n]", codigo02);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao02);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area02);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB02);

    printf("Digite os pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos02);

    // ================= CÁLCULOS =================

    densidade01 = populacao01 / area01;
    pibpercapita01 = PIB01 / populacao01;

    densidade02 = populacao02 / area02;
    pibpercapita02 = PIB02 / populacao02;

    superpoder01 = populacao01 + area01 + PIB01 + pontosturisticos01 + pibpercapita01 + (1 / densidade01);
    superpoder02 = populacao02 + area02 + PIB02 + pontosturisticos02 + pibpercapita02 + (1 / densidade02);

    // ================= EXIBIÇÃO =================

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado01);
    printf("Cidade: %s\n", nome01);
    printf("Código: %s\n", codigo01);
    printf("População: %lu\n", populacao01);
    printf("Área: %.2f\n", area01);
    printf("PIB: %.2f\n", PIB01);
    printf("Pontos Turísticos: %d\n", pontosturisticos01);
    printf("Densidade Populacional: %.2f\n", densidade01);
    printf("PIB per Capita: %.2f\n", pibpercapita01);
    printf("Super Poder: %.2f\n", superpoder01);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado02);
    printf("Cidade: %s\n", nome02);
    printf("Código: %s\n", codigo02);
    printf("População: %lu\n", populacao02);
    printf("Área: %.2f\n", area02);
    printf("PIB: %.2f\n", PIB02);
    printf("Pontos Turísticos: %d\n", pontosturisticos02);
    printf("Densidade Populacional: %.2f\n", densidade02);
    printf("PIB per Capita: %.2f\n", pibpercapita02);
    printf("Super Poder: %.2f\n", superpoder02);

    // ================= COMPARAÇÃO =================

    printf("\n--- Comparação de Cartas ---\n");

    printf("População: Carta 1 venceu (%d)\n", populacao01 > populacao02);
    printf("Área: Carta 1 venceu (%d)\n", area01 > area02);
    printf("PIB: Carta 1 venceu (%d)\n", PIB01 > PIB02);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos01 > pontosturisticos02);

    // Densidade (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade01 < densidade02);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita01 > pibpercapita02);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder01 > superpoder02);

    return 0;
}