#include <stdio.h>
// -> JOGO SUPER TRUNFO <-


int main(){
// -> ESTRUTURA DA CARTA 1 <-

// Atributos da carta 1:
char estado_1; // Uma letra que represente o estado de 'A' à 'H'.
char codigo_carta_1[10]; // Letra do estado + um numero de 01 a 04.
char nome_cidade_1[50]; // Nome da Cidade.
int populacao_1, pontos_turisticos_1; // Quantidade da população e quantidade de pontos turisticos.
float area_1, PIB_1; // O tamanho da área e o valor do PIB da cidade.
float densidade_populacional_1, PIB_per_capita_1;


// -> Jogador digitará os dados da carta 1 <-
printf("\n");
printf("->> CADASTRO DA CARTA 1 <<-\n");  // Título 
printf("\n");

printf("Digite a letra inicial do estado [A à H]: ");
scanf(" %c", &estado_1);

printf("Digite o codigo da carta (Estado + [01 à 04], ex: R02...): ");
scanf("%s", &codigo_carta_1);

printf("Digite o nome da cidade: ");
scanf("%s", &nome_cidade_1);

printf("Digite a população: ");
scanf("%d", &populacao_1);

printf("Digite o tamanho da área(m²): ");
scanf("%f", &area_1);

printf("Digite o valor do PIB: ");
scanf("%f", &PIB_1);

printf("Digite o numero de pontos turísticos: ");
scanf("%d", &pontos_turisticos_1);

// Calculo da "densidade populacional" e "PIB per capita" da carta 1 usando casting;
densidade_populacional_1 = (float) (populacao_1 / area_1);
PIB_per_capita_1 = (float) (PIB_1 / populacao_1);

// -> ESTRUTURA DA CARTA 2 <-

// Atributos da carta 2
char estado_2; 
char codigo_carta_2[10];
char nome_cidade_2[50];
int populacao_2, pontos_turisticos_2; 
float area_2, PIB_2;
float densidade_populacional_2, PIB_per_capita_2;


// -> Jogador digitará os dados da carta 2 <-
printf("\n");
printf("->> CADASTRO DA CARTA 2 <<-\n");  // Título 
printf("\n");

printf("Digite a letra inicial do estado [A à H]: ");
scanf(" %c", &estado_2);

printf("Digite o codigo da carta (Estado + [01 à 04], ex: R02...): ");
scanf("%s", &codigo_carta_2);

printf("Digite o nome da cidade: ");
scanf("%s", &nome_cidade_2);

printf("Digite a população: ");
scanf("%d", &populacao_2);

printf("Digite o tamanho da área(m²): ");
scanf("%f", &area_2);

printf("Digite o valor do PIB: ");
scanf("%f", &PIB_2);

printf("Digite o numero de pontos turísticos: ");
scanf("%d", &pontos_turisticos_2);

// Calculo da "densidade populacional" e "PIB per capita" da carta 2 usando casting;
densidade_populacional_2 = (float) (populacao_2 / area_2);
PIB_per_capita_2 = (float) (PIB_2 / populacao_2);


// -> DADOS DA CARTA 1 <-
printf("\n");
printf("### DADOS DA CARTA 1 ###\n"); // Título
printf("\n");
printf("Estado: %c\n", estado_1);
printf("Código: %s\n", codigo_carta_1);
printf("Nome da Cidade: %s\n", nome_cidade_1);
printf("População: %d\n", populacao_1);
printf("Área: %.2f m²\n", area_1);
printf("PIB: R$ %.2f\n", PIB_1);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
printf("Densidade Populacional: %.3f m²\n", densidade_populacional_1);
printf("PIB Per Capita: R$ %.2f por pessoa\n", PIB_per_capita_1);


// -> DADOS DA CARTA 2 <-
printf("\n");
printf("### DADOS DA CARTA 2 ###\n"); // Título
printf("\n");
printf("Estado: %c\n", estado_2);
printf("Código: %s\n", codigo_carta_2);
printf("Nome da Cidade: %s\n", nome_cidade_2);
printf("População: %d\n", populacao_2);
printf("Área: %.2f m²\n", area_2);
printf("PIB: R$ %.2f\n", PIB_2);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
printf("Densidade Populacional: %.3f m²\n", densidade_populacional_2);
printf("PIB Per Capita: R$ %.2f por pessoa\n", PIB_per_capita_2);

// -> COMPARAÇÃO DAS CARTAS <-
int escolha_jogador_1, escolha_jogador_2; // Variável que armazenará a escolha do jogador
int resultado_1, resultado_2, resultado_comparacao;

printf("\n");
printf("### COMPARAÇÃO DAS CARTAS ###\n"); // Título

// -> MENU DE ESCOLHA DO PRIMEIRO ATRIBUTO <-
printf("\n");
printf("### Menu do Primeiro Atributo ###\n"); // Subtítulo
printf("\n");

printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("\n");

printf("Escolha o primeiro atributo: "); // Aqui o jogador digitará sua escolha
scanf("%d", &escolha_jogador_1);
printf("\n");

// O que exibirá de acordo com a escolha do jogador
switch (escolha_jogador_1)
{
case 1:
    printf("Atributo escolhido: População\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("População da carta 1 %s: %d\n", nome_cidade_1, populacao_1);
    printf("População da carta 2 %s: %d\n", nome_cidade_2, populacao_2);
    resultado_1 = populacao_1 > populacao_2 ? 1 : 0;    
    break;
case 2:
    printf("Atributo escolhido: Área\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("Área da carta 1 %s: %.2f m²\n", nome_cidade_1, area_1);
    printf("Área da carta 2 %s: %.2f m²\n", nome_cidade_2, area_2);
    resultado_1 = area_1 > area_2 ? 1 : 0;
    break;
case 3:
    printf("Atributo escolhido: PIB\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("PIB da carta 1 %s: R$ %.2f\n", nome_cidade_1, PIB_1);
    printf("PIB da carta 2 %s: R$ %.2f\n", nome_cidade_2, PIB_2);
    resultado_1 = PIB_1 > PIB_2 ? 1 : 0;
    break;
case 4:
    printf("Atributo escolhido: Pontos Turísticos\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("Pontos Turísticos da carta 1 %s: %d\n", nome_cidade_1, pontos_turisticos_1);
    printf("Pontos Turísticos da carta 2 %s: %d\n", nome_cidade_2, pontos_turisticos_2);
    resultado_1 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
    break;
case 5:
    printf("Atributo escolhido: Densidade Populacional\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("Densidade Populacional da carta 1 %s: %.3f m²\n", nome_cidade_1, densidade_populacional_1);
    printf("Densidade Populacional da carta 2 %s: %.3f m²\n", nome_cidade_2, densidade_populacional_2);
    resultado_1 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
    break;
default:
    printf("Escolha inválida!");
    break;
}


if (resultado_1 == 1){
    printf(">>>> Carta 1, %s vence a PRIMEIRA rodada <<<<\n", nome_cidade_1);
} else {
    printf(">>>> Carta 2, %s vence a PRIMEIRA rodada <<<<\n", nome_cidade_2);
}

// -> MENU DE ESCOLHA DO SEGUNDO ATRIBUTO <-
printf("\n");
printf("### Menu do Segundo Atributo ###\n"); // Subtítulo
printf("\n");

printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("\n");

printf("Escolha o primeiro atributo: "); // Aqui o jogador digitará sua escolha
scanf("%d", &escolha_jogador_2);
printf("\n");

if (escolha_jogador_1 == escolha_jogador_2){
    printf("Você escolheu o mesmo atributo!\n");
} else {
// O que exibirá de acordo com a escolha do jogador
switch (escolha_jogador_2)
{
case 1:
    printf("Atributo escolhido: População\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("População da carta 1 %s: %d\n", nome_cidade_1, populacao_1);
    printf("População da carta 2 %s: %d\n", nome_cidade_2, populacao_2);
    resultado_2 = populacao_1 > populacao_2 ? 1 : 0;
    break;
case 2:
    printf("Atributo escolhido: Área\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("Área da carta 1 %s: %.2f m²\n", nome_cidade_1, area_1);
    printf("Área da carta 2 %s: %.2f m²\n", nome_cidade_2, area_2);
    resultado_2 = area_1 > area_2 ? 1 : 0;
    break;
case 3:
    printf("Atributo escolhido: PIB\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("PIB da carta 1 %s: R$ %.2f\n", nome_cidade_1, PIB_1);
    printf("PIB da carta 2 %s: R$ %.2f\n", nome_cidade_2, PIB_2);
    resultado_2 = PIB_1 > PIB_2 ? 1 : 0;
    break;
case 4:
    printf("Atributo escolhido: Pontos Turísticos\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("Pontos Turísticos da carta 1 %s: %d\n", nome_cidade_1, pontos_turisticos_1);
    printf("Pontos Turísticos da carta 2 %s: %d\n", nome_cidade_2, pontos_turisticos_2);
    resultado_2 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
    break;
case 5:
    printf("Atributo escolhido: Densidade Populacional\n");
    printf("Carta 1: %s X Carta 2: %s\n", nome_cidade_1, nome_cidade_2);
    printf("Densidade Populacional da carta 1 %s: %.3f m²\n", nome_cidade_1, densidade_populacional_1);
    printf("Densidade Populacional da carta 2 %s: %.3f m²\n", nome_cidade_2, densidade_populacional_2);
    resultado_2 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
    break;
default:
    printf("Escolha inválida!");
    break;
}
}

if (resultado_1 && resultado_2){
    printf(">>>> Carta 1, %s vence as duas rodadas <<<<\n", nome_cidade_1);
} else if (resultado_1 != resultado_2){
    printf(">>>> Houve um empate <<<<\n");
} else {
    printf(">>>> Carta 2, %s vence as duas rodadas <<<<\n", nome_cidade_2);
}
return 0; // FIM!!!

}