#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //variáveis da carta 1
    char estado1;
    char codigo_carta1;
    char cidade1;
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;
    
    //variáveis da carta 2
    char estado2;
    char codigo_carta2;
    char cidade2;
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //armazena os valores das variáveis da carta 2
    printf("Carta 1:\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo_carta1);
    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a população da Cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a Área da Cidade (em Km²): ");
    scanf("%d", &area1);
    printf("Digite o PIB da Cidade: ");
    scanf("%d", &PIB1);
    printf("Digite quantos pontos turisticos a Cidade tem: ");
    scanf("%d", &pontos_turisticos1);
    
    //armazena os valores das variáveis da carta 2
    printf("\n\nCarta 2:\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo_carta2);
    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população da Cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a Área da Cidade (em Km²): ");
    scanf("%d", &area2);
    printf("Digite o PIB da Cidade: ");
    scanf("%d", &PIB2);
    printf("Digite quantos pontos turisticos a Cidade tem: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //exibe os valores da carta 1
    printf("Carta 1:\n");
    printf("Nome do estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População da Cidade: %d\n", populacao1);
    printf("Área da Cidade (em Km²): %d\n", area1);
    printf("PIB da Cidade: %d\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    
    //exibe os dados da carta 2
    printf("\nCarta 2:\n");
    printf("Nome do estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População da Cidade: %d\n", populacao2);
    printf("Área da Cidade (em Km²): %d\n", area2);
    printf("PIB da Cidade: %d\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
