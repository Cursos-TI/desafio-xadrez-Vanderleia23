#include <stdio.h>
#include <stdbool.h>


    bool cavalo = true; // Variável de controle do loop

    while (cavalo) {
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima \n");
        }

        for (int esquerda = 0; esquerda < 1; esquerda++) {
            printf("Esquerda \n");
        }

        // Adicione uma condição para sair do loop
        cavalo = false; // Alterar para false para evitar loop infinito
    }

    return 0;
}
