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

}
