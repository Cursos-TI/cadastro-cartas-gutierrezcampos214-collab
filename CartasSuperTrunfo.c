#include <stdio.h>

int main() {

    // Variáveis
    int pontosturisticos01, pontosturisticos02, populacao01, populacao02;
    float area01, area02, PIB01, PIB02;

    char estado01[50], estado02[50], nome01[50], nome02[50], codigo01[50], codigo02[50];

    // Novas variáveis (nível aventureiro)
    float densidade01, densidade02, pibpercapita01, pibpercapita02;

    // ================= CARTA 1 =================

    printf("Digite o nome do estado: \n");
    scanf("%s", estado01);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome01);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo01);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao01);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area01);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB01);

    printf("Digite os pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos01);

    // ================= CARTA 2 =================

    printf("\nDigite o nome do estado: \n");
    scanf("%s", estado02);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome02);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo02);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao02);

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

    // ================= EXIBIÇÃO =================

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado01);
    printf("Cidade: %s\n", nome01);
    printf("Código: %s\n", codigo01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f\n", area01);
    printf("PIB: %.2f\n", PIB01);
    printf("Pontos Turísticos: %d\n", pontosturisticos01);
    printf("Densidade Populacional: %.2f\n", densidade01);
    printf("PIB per Capita: %.2f\n", pibpercapita01);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado02);
    printf("Cidade: %s\n", nome02);
    printf("Código: %s\n", codigo02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f\n", area02);
    printf("PIB: %.2f\n", PIB02);
    printf("Pontos Turísticos: %d\n", pontosturisticos02);
    printf("Densidade Populacional: %.2f\n", densidade02);
    printf("PIB per Capita: %.2f\n", pibpercapita02);

    return 0;
}