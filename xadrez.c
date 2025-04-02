#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 2;

    //Movimento da Torre

    printf("Movimento da Torre: \n");

    while (torre <= 5)
    {
        printf ("Direita \n", torre);
        torre++;
    }
    
    //Movimento do Bispo

    printf("\nMoviento do Bispo: \n");

    do
    {
        printf("Cima \n", bispo);
        printf("Direita \n", bispo);
        bispo++;
    } while (bispo <=5);
    
    //Movimento da Rainha

    printf(" \nMovimento da Rainha: \n");

    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("Esquerda \n", rainha);
    }

    //Movimento do Cavalo

    printf("\nMovimento do Cavalo: \n");

    while (cavalo)
    {
        for (cavalo = 2; cavalo <= co; i++)
        {
            /* code */
        }
        
    }
    
    

    return 0;
}
