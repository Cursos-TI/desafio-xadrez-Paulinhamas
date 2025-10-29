#include <stdio.h>

void moverTorreRecursiva(int casasRestantes) {
    if (casasRestantes == 0) {
        return; 
    }
    printf("Direita\n");
    moverTorreRecursiva(casasRestantes - 1); // Chamada recursiva
}

void moverBispoRecursivo(int movimentosRestantes, int passoAtual) {
    if (movimentosRestantes == 0) {
        return; 
    }

    // Loop aninhado para simular diagonal (Cima + Direita)
    for (int i = 1; i <= 1; i++) { // movimento vertical
        printf("Cima\n");
        for (int j = 1; j <= 1; j++) { // movimento horizontal
            printf("Direita\n");
        }
    }

    moverBispoRecursivo(movimentosRestantes - 1, passoAtual + 1);
}

void moverRainhaRecursiva(int casasRestantes) {
    if (casasRestantes == 0) {
        return; 
    }
    printf("Esquerda\n");
    moverRainhaRecursiva(casasRestantes - 1);
}

void moverCavaloComplexo(int casasVerticais, int casasHorizontais) {
    printf("Movimento do CAVALO:\n");

    for (int i = 1; i <= casasVerticais; i++) { // movimento vertical (Cima)
        if (i == 3) {
            break;
        }

        printf("Cima\n");

        // Loop interno para movimento horizontal (Direita)
        for (int j = 1; j <= casasHorizontais; j++) {
            if (j > 1) {
                continue;
            }
            printf("Direita\n");
        }
    }

    printf("\n");
}


int main() {
   
    // Parâmetros de movimentação
    
    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 6;
    int casasVerticaisCavalo = 2;
    int casasHorizontaisCavalo = 1;

    // Movimentos simulados
   
        printf("Movimento da TORRE:\n");
    moverTorreRecursiva(casasTorre);
    printf("\n");

    printf("Movimento do BISPO:\n");
    moverBispoRecursivo(casasBispo, 1);
    printf("\n");

    printf("Movimento da RAINHA:\n");
    moverRainhaRecursiva(casasRainha);
    printf("\n");

    moverCavaloComplexo(casasVerticaisCavalo, casasHorizontaisCavalo);

    printf("Fim da simulação de movimentos.\n");

    return 0;
}