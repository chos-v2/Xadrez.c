#include <stdio.h>

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

// Quantidade de casas que cada peça vai se mover

    // Movimento da Torre usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo usando while
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha usando do-while
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);
        printf("\n");

    // Movimento do Cavalo
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop for para as duas casas para baixo
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop while para a casa para a esquerda
    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
