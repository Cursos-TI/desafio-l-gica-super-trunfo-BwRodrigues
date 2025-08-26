#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char estado;  //Uma letra de A ate H.
    char codigo[5]; // Exemplo = A01.
    char cidade[50]; // Nome da Cidade.
    int populacao, pontos;
    float area, pib;

// Entrada de dados.

printf ("Digite o seu estado (A-H)."); 
scanf ( " %c", &estado); //fiquei 2 dias preso em um /n que não fazia avançar para o proximo comando.

printf ("Crie seu codigo 1° Letra do seu estado + 1 numero de 01 a 04.\n");
scanf ("%s", codigo);

printf ("Qual o nome de sua cidade sem espaço?\n");
scanf("%s", cidade);

printf ("população: \n");
scanf ("%d", &populacao);

printf ("Area em Km2: \n");
scanf ("%f", &area );

printf ("PIB: \n");
scanf ("%f", &pib);

printf ("Quantidade de pontos turisticos?");
scanf ("%d", &pontos);


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
