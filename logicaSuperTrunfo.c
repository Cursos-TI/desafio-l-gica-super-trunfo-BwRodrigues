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

printf("\n --- Carta 01 ---\n");
printf("Estado: %c "), estado1;
printf("Codigo: %s "), codigo1;
printf("Cidade: %s \n"), cidade1;
printf("População: %d \n"), populacao1;
printf("Área: %f \n"), area1;
printf("PIB: %f \n"), pib1;
printf("Pontos turisticos: %d \n"), pontos1;



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
