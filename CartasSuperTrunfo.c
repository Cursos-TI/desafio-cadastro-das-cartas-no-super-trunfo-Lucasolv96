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

   
    char pais1[30], pais2[30], pais3[30], pais4[30];
    char Estado1[30], Estado2[30], Estado3[30], Estado4[30];
    char cidade1[30], cidade2[30], cidade3[30], cidade4[30];
    float populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int ponto_turistico1, ponto_turistico2, ponto_turistico3, ponto_turistico4;



   
   
   
    printf("========================================\n");
    printf("|        SUPER TRUNFO - PAÍSES          |\n");
    printf("========================================\n");

    // Nesta parte os abaixo é aonde acontece a entrada de dados para imprimi-los nas cartas logo depois.

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

    printf("Digite a quantidade de pontos turísticos desta mesma cidade: \n");
    scanf("%d", &ponto_turistico1);

    // Nesta parte abaixo é onde se forma a estrutura para apresentação das informações cadastradas pelos usuários.
    // Carta A01
    printf("*************************************\n");
    printf("A01\n");
    printf("                %s \n", cidade1);
    printf("*************************************\n");
    printf("               Status\n");
    printf("País:%s\n", pais1);
    printf("População:%f \n", populacao1);
    printf("Área:%f \n", area1);
    printf("PIB:%f \n", pib1);
    printf("Pontos Turísticos: %d \n", ponto_turistico1);

    printf("\n\n\n\n\n");



    // Agora será repetido toda estrutura, apenas alterando as variáveis de armazenamento para cadastrar novas cartas.

    printf("Digite o de um novo país: \n");
    scanf(" %s", &pais2[30]);

    printf("Digite o de um Estado desse mesmo país: \n");
    scanf(" %s", &Estado2[30]);

    printf("Digite o nome de uma cidade desse mesmo Estado: \n");
    scanf(" %s", &cidade2[30]);

    printf("Digite o quantitativo da população desta mesma cidade: \n");
    scanf(" %f", &populacao2);

    printf("Quantos quilômetros possui esta mesma cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o valor do PIB desta mesma cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos desta mesma cidade: \n");
    scanf("%d", &ponto_turistico2);

    // Nesta parte abaixo é onde se forma a estrutura para apresentação das informações cadastradas pelos usuários.

    // carta A02
    printf("*************************************\n");
    printf("A02\n");
    printf("                %s \n", cidade2);
    printf("*************************************\n");
    printf("               Status\n");
    printf("País:%s\n", pais2);
    printf("População:%f \n", populacao1);
    printf("Área:%f \n", area2);
    printf("PIB:%f \n", pib2);
    printf("Pontos Turísticos: %d \n", ponto_turistico2);

    // Carta A03

    printf("Digite o nome de um novo país: \n");
    scanf(" %s", &pais3[30]);

    printf("Digite o de um Estado desse mesmo país: \n");
    scanf(" %s", &Estado3[30]);

    printf("Digite o nome de uma cidade desse mesmo Estado: \n");
    scanf(" %s", &cidade3[30]);

    printf("Digite o quantitativo da população desta mesma cidade: \n");
    scanf(" %f", &populacao3);

    printf("Quantos quilômetros possui esta mesma cidade: \n");
    scanf(" %f", &area3);

    printf("Digite o valor do PIB desta mesma cidade: \n");
    scanf(" %f", &pib3);

    printf("Digite a quantidade de pontos turísticos desta mesma cidade: \n");
    scanf("%d", &ponto_turistico3);

    // Nesta parte abaixo é onde se forma a estrutura para apresentação das informações cadastradas pelos usuários.

    printf("*************************************\n");
    printf("A03\n");
    printf("                %s \n", cidade3);
    printf("*************************************\n");
    printf("               Status\n");
    printf("País:%s\n", pais3);
    printf("População:%f \n", populacao3);
    printf("Área:%f \n", area3);
    printf("PIB:%f \n", pib3);
    printf("Pontos Turísticos: %d \n", ponto_turistico1);


    // Carta A04

    printf("Digite o nome de um país: \n");
    scanf(" %s", &pais4[30]);

    printf("Digite o de um Estado desse mesmo país: \n");
    scanf(" %s", &Estado4[30]);

    printf("Digite o nome de uma cidade desse mesmo Estado: \n");
    scanf(" %s", &cidade4[30]);

    printf("Digite o quantitativo da população desta mesma cidade: \n");
    scanf(" %f", &populacao4);

    printf("Quantos quilômetros possui esta mesma cidade: \n");
    scanf(" %f", &area4);

    printf("Digite o valor do PIB desta mesma cidade: \n");
    scanf(" %f", &pib4);

    printf("Digite a quantidade de pontos turísticos desta mesma cidade: \n");
    scanf("%d", &ponto_turistico4);

    // Nesta parte abaixo é onde se forma a estrutura para apresentação das informações cadastradas pelos usuários.

    printf("*************************************\n");
    printf("A04\n");
    printf("                %s \n", cidade4);
    printf("*************************************\n");
    printf("               Status\n");
    printf("País:%s\n", pais4);
    printf("População:%f \n", populacao4);
    printf("Área:%f \n", area4);
    printf("PIB:%f \n", pib4);
    printf("Pontos Turísticos: %d \n\n\n\n", ponto_turistico4);


    // Nesta parte sera impresso as cartas para compara-las.

    printf("***********************************************\n");
    printf("|A01\n");
    printf("|Cidade:%s|\n", cidade1);
    printf("**********************************************\n");
    printf("|Status\n");
    printf("|País:%s\n", pais1);
    printf("População:%f \n", populacao1);
    printf("Área:%f \n", area1);
    printf("PIB:%f \n", pib1);
    printf("Pontos Turísticos:%d \n\n\n\n", ponto_turistico1);

    // Carta 2 exibição


    printf("***********************************************\n");
    printf("|A02\n");
    printf("|Cidade:%s|\n", cidade2);
    printf("**********************************************\n");
    printf("|Status\n");
    printf("|País:%s\n", pais2);
    printf("População:%f \n", populacao2);
    printf("Área:%f \n", area2);
    printf("PIB:%f \n", pib2);
    printf("Pontos Turísticos:%d \n\n\n\n", ponto_turistico2);

    // Carta 3 exibição

    printf("***********************************************\n");
    printf("|A03\n");
    printf("|Cidade:%s|\n", cidade3);
    printf("**********************************************\n");
    printf("|Status\n");
    printf("|País:%s\n", pais3);
    printf("População:%f \n", populacao3);
    printf("Área:%f \n", area3);
    printf("PIB:%f \n", pib3);
    printf("Pontos Turísticos:%d \n\n\n", ponto_turistico3);

    // Carta 4 exibição

    printf("***********************************************\n");
    printf("|A04\n");
    printf("|Cidade:%s|\n", cidade4);
    printf("**********************************************\n");
    printf("|Status\n");
    printf("|País:%s\n", pais4);
    printf("População:%f \n", populacao4);
    printf("Área:%f \n", area4);
    printf("PIB:%f \n", pib4);
    printf("Pontos Turísticos:%d \n", ponto_turistico4);

    


    return 0;
}
