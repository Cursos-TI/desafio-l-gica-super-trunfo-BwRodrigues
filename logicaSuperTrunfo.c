#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Cadastro de variaveis de carta 01 e carta 02.
    char estado1, estado2;  //Uma letra de A ate H.
    char codigo1[5], codigo2[5]; // Exemplo = A01.
    char cidade1[50],cidade2[50]; // Nome da Cidade.
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2;
    float densidade1, densidade2;  // Calculo Densidade= população / area
    float pib_per_capita1, pib_per_capita2 ; // Calculo PIB / população

// Entrada de dados.

printf ("---Cadastre a sua primeira carta.---\n\n"); //**Lembrete pessoal, conferir sempre ponto e virgula. 

printf ("Digite o seu estado (A-H).\n"); 
scanf ( " %c", &estado1); //fiquei 2 dias preso em um /n (barra ao contrario) que não fazia avançar para o proximo comando.

printf ("Crie seu codigo 1° Letra do seu estado + 1 numero de 01 a 04.\n");
scanf ("%s", codigo1);

printf ("Qual o nome de sua cidade sem espaço?\n");
scanf("%s", cidade1);

printf ("população: \n");
scanf ("%d", &populacao1);

printf ("Area em Km2: \n");
scanf ("%f", &area1 );

printf ("PIB: \n");
scanf ("%f", &pib1);

printf ("Quantidade de pontos turisticos?\n");
scanf ("%d", &pontos1);

//Entrada carta numero 02

printf ("---Cadastre a segunda carta.---\n\n");
printf ("Digite o seu estado (A-H).\n"); 
scanf ( " %c", &estado2); //fiquei 2 dias preso em um /n que não fazia avançar para o proximo comando.

printf ("Crie seu codigo 1° Letra do seu estado + 1 numero de 01 a 04.\n");
scanf ("%s", codigo2);

printf ("Qual o nome de sua cidade sem espaço?\n");
scanf("%s", cidade2);

printf ("população: \n");
scanf ("%d", &populacao2);

printf ("Area em Km2: \n");
scanf ("%f", &area2 );

printf ("PIB: \n");
scanf ("%f", &pib2);

printf ("Quantidade de pontos turisticos?\n");
scanf ("%d", &pontos2);

//calculo de variaveis pib per capita e densidade.

densidade1 = populacao1 / area1;
pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;

densidade2 = populacao2 / area2;
pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;



printf("\n --- Carta 01 ---\n");
printf("Estado: %c \n", estado1);
printf("Codigo: %s \n", codigo1);
printf("Cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Área: %f \n", area1);
printf("PIB: %f \n", pib1);
printf("Pontos turisticos: %d \n", pontos1);
printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

printf("\n --- Carta 02 ---\n");
printf("Estado: %c \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %f \n", area2);
printf("PIB: %f \n", pib2);
printf("Pontos turisticos: %d \n", pontos2);
printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pib_per_capita2);


// >>>  Comparação das cartas e placar básico
int placar1 = 0;
int placar2 = 0;

printf("\n--- Comparação por atributo ---\n");

// População
if (populacao1 > populacao2) { printf("População: %s venceu.\n", cidade1); placar1++; }
else if (populacao2 > populacao1) { printf("População: %s venceu.\n", cidade2); placar2++; }
else { printf("População: Empate.\n"); }

// Área
if (area1 > area2) { printf("Área: %s venceu.\n", cidade1); placar1++; }
else if (area2 > area1) { printf("Área: %s venceu.\n", cidade2); placar2++; }
else { printf("Área: Empate.\n"); }

// PIB total
if (pib1 > pib2) { printf("PIB total: %s venceu.\n", cidade1); placar1++; }
else if (pib2 > pib1) { printf("PIB total: %s venceu.\n", cidade2); placar2++; }
else { printf("PIB total: Empate.\n"); }

// Pontos turísticos
if (pontos1 > pontos2) { printf("Pontos turísticos: %s venceu.\n", cidade1); placar1++; }
else if (pontos2 > pontos1) { printf("Pontos turísticos: %s venceu.\n", cidade2); placar2++; }
else { printf("Pontos turísticos: Empate.\n"); }

// Densidade (menor vence)
if (densidade1 < densidade2) { printf("Densidade (menor vence): %s venceu.\n", cidade1); placar1++; }
else if (densidade2 < densidade1) { printf("Densidade (menor vence): %s venceu.\n", cidade2); placar2++; }
else { printf("Densidade: Empate.\n"); }

// PIB per capita
if (pib_per_capita1 > pib_per_capita2) { printf("PIB per capita: %s venceu.\n", cidade1); placar1++; }
else if (pib_per_capita2 > pib_per_capita1) { printf("PIB per capita: %s venceu.\n", cidade2); placar2++; }
else { printf("PIB per capita: Empate.\n"); }

// Resultado final
printf("\n--- Placar Geral ---\n");
printf("%s: %d ponto(s) | %s: %d ponto(s)\n", cidade1, placar1, cidade2, placar2);

if (placar1 > placar2) {
    printf("🏆 Cidade vencedora: %s\n", cidade1);
} else if (placar2 > placar1) {
    printf("🏆 Cidade vencedora: %s\n", cidade2);
} else {
    printf("🤝 Empate geral entre %s e %s.\n", cidade1, cidade2);
}

return 0;


   

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

        /* code */

    


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
