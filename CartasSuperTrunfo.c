#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Função para registrar as cartas
void RegistrarCarta(
     char *estado,
     char codigo_carta[20],
     char cidade [50],
     unsigned long int *populacao,
     double *area,
     double *PIB,
     int *pontos_turisticos
    ){
    printf("Digite código do Estado: ");
    scanf(" %c", estado);
    printf("Digite o código da carta: ");
    scanf(" %s", codigo_carta);
    printf("Digite o nome da Cidade: ");
    scanf(" %49[^\n]", cidade);
    printf("Digite a população da Cidade: ");
    scanf(" %lu", populacao);
    printf("Digite a Área da Cidade (em Km²): ");
    scanf(" %lf", area);
    printf("Digite o PIB da Cidade: ");
    scanf(" %lf", PIB);
    printf("Digite quantos pontos turisticos a Cidade tem: ");
    scanf(" %d", pontos_turisticos);
}

// Função para exibir os dados da carta
void ExibirCarta(
     char estado,
     char codigo_carta[20],
     char cidade [50],
     unsigned long int populacao,
     double area,
     double PIB,
     int pontos_turisticos,
     double densidade_populacional,
     double PIB_per_capita,
     double super_poder
    ){
    printf("Código do estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População da Cidade: %lu\n", populacao);
    printf("Área da Cidade (em Km²): %.2lf\n", area);
    printf("PIB da Cidade: %.2lf\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2lf habitantes/Km²\n", densidade_populacional);
    printf("PIB per Capita: %.2lf\n", PIB_per_capita);
    printf("Super Poder: %.2lf\n\n", super_poder);
}
//função que calcula a densidade populacional
// a densidade populacional é calculada como a população dividida pela área da cidade.
double CalculoDensidadePopulacional(
    unsigned long int populacao, 
    double area
){
    // verifica se a população ou a área são zero para evitar divisão por zero
    if(populacao == 0 || area == 0.0){
        printf("Não é possível fazer uma divisão por 0\n");
        return 0.0;
    } else{
        return (double) populacao / area;
    }
}

//função que calcula o PIB per capita
// o PIB per capita é calculado como o PIB dividido pela população, multiplicado por 1 bilhão para expressar em unidades mais compreensíveis.
double CalculoPIBPerCapita (
    double PIB,
    unsigned long int populacao
){
    // verifica se a população ou o PIB são zero para evitar divisão por zero
    if(populacao == 0 || PIB == 0.0){
        printf("Não é possível fazer uma divisão por 0\n");
        return 0.0;
    } else {
        return (PIB * 1000000000.0) / (double) populacao;
    }
}

// Função que calcula o super poder da cidade
double CalculoSuperPoder(
     unsigned long int populacao,
     double area,
     double PIB,
     int pontos_turisticos,
     double densidade_populacional,
     double PIB_per_capita
){
    //super poder é a soma de todos os atributos e do inverso da densidade populacional
    return ( (double) populacao + area + PIB + (double) pontos_turisticos + (1.0/densidade_populacional) + PIB_per_capita);
}

int CompararCartas(
    double valor1,
    double valor2,
    int invertido
){
    //compara os valores das cartas
    //retorna 1 se a carta 1 ganhar e 0 se a carta 2 ganhar
    //se invertido for 1, inverte a comparação (usado para comparar atributos que devem ser menores, como a densidade populacional)
    //se invertido for 0, mantém a comparação normal
    if(invertido == 1){
        return valor1 < valor2 ? 1 : 0;
    } else {
        return valor1 > valor2 ? 1 : 0;
    }
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //variáveis da carta 1
    char estado1, codigo_carta1[20], cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    double area1, PIB1, densidade_populacional1, PIB_per_capita1, super_poder1;
    
    //variáveis da carta 2
    char estado2, codigo_carta2[20], cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    double area2, PIB2, densidade_populacional2, PIB_per_capita2, super_poder2;
    
    //Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //cadastro da carta 1
    printf("Cadastro da carta 1:\n");
    //uso a função RegistrarCarta para armazenar os valores das variáveis da carta 1
    RegistrarCarta(
        &estado1, 
        codigo_carta1, 
        cidade1, 
        &populacao1, 
        &area1, 
        &PIB1, 
        &pontos_turisticos1
    );
    // cálculo da densidade populacional e do PIB per capita da carta 1:
    densidade_populacional1 = CalculoDensidadePopulacional(populacao1, area1);
    PIB_per_capita1 = CalculoPIBPerCapita(PIB1, populacao1);
    
    //super poder da carta 1
    super_poder1 = CalculoSuperPoder(
        populacao1, 
        area1, 
        PIB1, 
        pontos_turisticos1, 
        densidade_populacional1, 
        PIB_per_capita1
    );
    
    //cadastro da carta 2
    printf("\nCadastro da carta 2:\n");
    //uso a função RegistrarCarta para armazenar os valores das variáveis da carta 1
    RegistrarCarta(
        &estado2, 
        codigo_carta2, 
        cidade2, 
        &populacao2, 
        &area2, 
        &PIB2, 
        &pontos_turisticos2
    );

    // cálculo da densidade populacional e do PIB per capita da carta 2:
    densidade_populacional2 = CalculoDensidadePopulacional(populacao2, area2);
    PIB_per_capita2 = CalculoPIBPerCapita(PIB2, populacao2);

    //super poder da carta 2
    super_poder2 = CalculoSuperPoder(
        populacao2,
        area2,
        PIB2,
        pontos_turisticos2,
        densidade_populacional2,
        PIB_per_capita2
    );
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //exibe os dados da carta 1
    printf("Dados da carta 1:\n");
    //uso a função ExibirCarta para exibir os valores das variáveis da carta 1
    ExibirCarta(
        estado1,
        codigo_carta1,
        cidade1,
        populacao1,
        area1,
        PIB1,
        pontos_turisticos1,
        densidade_populacional1,
        PIB_per_capita1,
        super_poder1
    );
    
    //exibe os dados da carta 2
    printf("\nDados da carta 2:\n");
    //uso a função ExibirCarta para exibir os valores das variáveis da carta 2
    ExibirCarta(
        estado2, 
        codigo_carta2, 
        cidade2, 
        populacao2, 
        area2, 
        PIB2, 
        pontos_turisticos2,
        densidade_populacional2,
        PIB_per_capita2,
        super_poder2
    );

    //comparação das cartas
    printf("\nComparação das cartas (1 = Carta 1 venceu, 0 = Carta 2 venceu):\n");
    printf("Comparação de População: %d\n", CompararCartas(populacao1, populacao2, 0));
    printf("Comparação de Área: %d\n", CompararCartas(area1, area2, 0));
    printf("Comparação de PIB: %d\n", CompararCartas(PIB1, PIB2, 0));
    printf("Comparação de Pontos Turísticos: %d\n", CompararCartas(pontos_turisticos1, pontos_turisticos2, 0));
    printf("Comparação de Densidade Populacional (Vence o menor): %d\n", CompararCartas(densidade_populacional1, densidade_populacional2, 1));
    printf("Comparação de PIB per Capita: %d\n", CompararCartas(PIB_per_capita1, PIB_per_capita2, 0));
    printf("Comparação de Super Poder: %d\n", CompararCartas(super_poder1, super_poder2, 0));

    return 0;
}