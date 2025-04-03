#include <stdio.h>

int main() {
    
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    printf("###Peças do jogo de Xadrez### \n");

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

   while(cavalo--)
   {
    for(int i = 1; i <= 2; i++){
        printf("Cima \n");
    }
        printf("Esquerda \n");
    }




   return 0;
}