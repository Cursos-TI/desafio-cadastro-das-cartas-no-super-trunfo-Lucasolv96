#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   
    char pais1[10], pais2[30], pais3[30], pais4[30];
    char Estado1[30], Estado2[30], Estado3[30], Estado4[30];
    char cidade1[30], cidade2[30], cidade3[30], cidade4[30];
    float populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int ponto_turistico1, ponto_turistico2, ponto_turistico3, ponto_turistico4;



   
   
   
    printf("========================================\n");
    printf("|        SUPER TRUNFO - PAÍSES          |\n");
    printf("========================================\n");


    printf("Seja Bem-Vindo ao Super trunfo - Países\n");
    printf("\nOrientações: cadastre as informações das cidades conforme solicitadas\n\n");

    printf("Digite o nome de um país: \n");
    scanf(" %s", &pais1[10]);

    printf("Digite o de um Estado desse mesmo país: \n");
    scanf(" %s", &Estado1[30]);

    printf("Digite o nome de uma cidade desse mesmo Estado: \n");
    scanf(" %s", &cidade1[30]);

    printf("Digite o quantitativo da população desta mesma cidade: \n");
    scanf(" %f", &populacao1);

    printf("Quantos quilômetros possui esta mesma cidade: \n");
    scanf(" %f", &area1);

    printf("Digite o valor do PIB desta mesma cidade: \n");
    scanf(" %f", &pib1);



    return 0;
}
