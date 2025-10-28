#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças

int main() {
    
    // Movimentação da Torre
    int casasTorre = 5; // número de casas que a Torre vai se mover

    printf("Movimento da TORRE:\n");
    // Torre move 5 casas para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); // espaço entre as peças

    //Movimentação do Bispo
    int casasBispo = 5; // número de casas que o Bispo vai se mover
    int i = 1;
    printf("Movimento do BISPO:\n");

    // Bispo move 5 casas na diagonal superior direita
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n"); // espaço entre as peças
        
    // Movimentação da Rainha
    int casasRainha = 8; // número de casas que a Rainha vai se mover
    int j = 1;
    printf("Movimento da RAINHA:\n");

    // Rainha move 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);
    printf("\nFim da simulação de movimentos.\n");

    return 0;
}