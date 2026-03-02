#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

    int pontosturisticos01, pontosturisticos02, população01, população02;
    float area01, area02, PIB01, PIB02;
    char estado01[50], estado02[50], nome01[50], nome02[50], codigo01[50], codigo02[50];

  // Área para entrada de dados

  // carta 01

  printf("Digite o nome do estado: \n", estado01);
  scanf("%s", &estado01);
  printf("Nome do estado é: %s\n", estado01);

  printf("Digite o nome da cidade: \n", nome01);
  scanf("%s", &nome01);
  printf("Nome da cidade é: %s\n", nome01);

  printf("Digite o código da cidade: \n", codigo01);
  scanf("%s", &codigo01);
  printf("Código da cidade é: %s\n", codigo01); 

  printf("Digite a população da cidade: \n", população01);
  scanf("%d", &população01);
  printf("População da cidade é: %d\n", população01);

  printf("Digite a área da cidade: \n", area01);
  scanf("%f", &area01);
  printf("Área da cidade é: %.2f\n", area01);   

  printf("Digite o PIB da cidade: \n", PIB01);
  scanf("%f", &PIB01);
  printf("PIB da cidade é: %.2f\n", PIB01);

  printf("Digite os pontos turísticos da cidade: \n", pontosturisticos01);
  scanf("%d", &pontosturisticos01);
  printf("Pontos turísticos da cidade é: %d\n", pontosturisticos01);

// Carta 02

  printf("Digite o nome do estado: \n", estado02);
  scanf("%s", &estado02);
  printf("Nome do estado é: %s\n", estado02);

  printf("Digite o nome da cidade: \n", nome02);
  scanf("%s", &nome02);
  printf("Nome da cidade é: %s\n", nome02);

  printf("Digite o código da cidade: \n", codigo02);
  scanf("%s", &codigo02);
  printf("Código da cidade é: %s\n", codigo02); 

  printf("Digite a população da cidade: \n", população02);
  scanf("%d", &população02);
  printf("População da cidade é: %d\n", população02);

  printf("Digite a área da cidade: \n", area02);
  scanf("%f", &area02);
  printf("Área da cidade é: %.2f\n", area02);   

  printf("Digite o PIB da cidade: \n", PIB02);
  scanf("%f", &PIB02);
  printf("PIB da cidade é: %.2f\n", PIB02);

  printf("Digite os pontos turísticos da cidade: \n", pontosturisticos02);
  scanf("%d", &pontosturisticos02);
  printf("Pontos turísticos da cidade é: %d\n", pontosturisticos02);

  

  // Área para exibição dos dados das cidades

  // Dados da Carta 01
  printf("Estado: %s\n", estado01);
  printf("Cidade: %s\n", nome01);
  printf("Código: %s\n", codigo01);
  printf("População: %d\n", população01);
  printf("Área: %.2f\n", area01);
  printf("PIB: %.2f\n", PIB01);
  printf("Pontos Turísticos: %d\n", pontosturisticos01);

  printf("\n--- Dados da Carta 02 ---\n");
  printf("Estado: %s\n", estado02);
  printf("Cidade: %s\n", nome02);
  printf("Código: %s\n", codigo02);
  printf("População: %d\n", população02);
  printf("Área: %.2f\n", area02);
  printf("PIB: %.2f\n", PIB02);
  printf("Pontos Turísticos: %d\n", pontosturisticos02);

return 0;
} 
