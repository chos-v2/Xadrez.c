#include <stdio.h>

// Movimento da Torre
int moverTorre(int casas) {
    if (casas == 0) return 0;
    printf("Direita\n");
    return moverTorre(casas - 1);
}

// Movimento do Bispo
int moverBispoRecursivo(int casas) {
    if (casas == 0) return 0;
    printf("Cima\n");
    printf("Direita\n");
    return moverBispoRecursivo(casas - 1);
}

// Movimento do Bispo
int moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) { // movimento vertical
        printf("Cima\n");
        for (int j = 0; j <= i; j++) { // movimento horizontal
            printf("Direita\n");
        }
    }
    return 0;
}

// Movimento da Rainha
int moverRainha(int casas) {
    if (casas == 0) return 0;
    printf("Esquerda\n");
    return moverRainha(casas - 1);
}

// Movimento do Cavalo
int moverCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            } else {
                continue;
            }
        }
    }
    printf("\n");
    return 0;
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoComLoops(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    moverCavalo();

    return 0;
}
