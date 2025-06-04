#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //declaração de variaveis
    int bispo = 1,torre = 1, rainha = 1;

    //do-while da peça rainha
    do{
        printf("Rainha : esquerda \n");
        rainha++;  // adiciona mais uma casa para o movimento da rainha
    }while(rainha <= 8);

printf("\n");//pula linha

    //for da peça torre
    for(torre; torre <= 5; torre++){

        printf("Torre : direita \n");
    }

 printf("\n");//pula linha

    //while da peça bispo
       while(bispo <= 5)
       {
        
        printf(" Bispo ");
        bispo++;  //adiciona movimento para mais uma casa
        printf(": diagonal direita \n");

       }
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
