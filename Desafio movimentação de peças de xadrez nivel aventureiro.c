#include <stdio.h>

int main() {
    // --------------------------------------------------------
    // MOVIMENTO DA TORRE — usando estrutura FOR
    // --------------------------------------------------------
    // A torre move-se em linha reta (horizontal ou vertical)
    // Aqui ela se moverá 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da TORRE (para a direita):\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // --------------------------------------------------------
    // MOVIMENTO DO BISPO — usando estrutura WHILE
    // --------------------------------------------------------
    // O bispo move-se na diagonal (aqui, 5 casas para cima e à direita)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do BISPO (diagonal cima-direita):\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // --------------------------------------------------------
    // MOVIMENTO DA RAINHA — usando estrutura DO-WHILE
    // --------------------------------------------------------
    // A rainha move-se em todas as direções
    // Aqui, ela se moverá 8 casas para a esquerda.
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da RAINHA (para a esquerda):\n");

    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    // --------------------------------------------------------
    // MOVIMENTO DO CAVALO — usando LOOPS ANINHADOS
    // --------------------------------------------------------
    // O cavalo move-se em "L" (duas casas em uma direção e uma perpendicular)
    // Aqui, ele se moverá duas casas para BAIXO e uma para a ESQUERDA.
    // Será usado:
    // - Um loop FOR para as duas casas para BAIXO
    // - Um loop WHILE interno para a casa para a ESQUERDA

    int casasBaixo = 2;   // quantidade de casas para baixo
    int casasEsquerda = 1; // quantidade de casas para a esquerda
    int contadorEsquerda;

    printf("Movimento do CAVALO (duas casas para baixo e uma para a esquerda):\n");

    // Loop externo (FOR): movimenta duas casas para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo (%d)\n", i);
    }

    // Loop interno (WHILE): uma casa para a esquerda
    contadorEsquerda = 1;
    while (contadorEsquerda <= casasEsquerda) {
        printf("Esquerda (%d)\n", contadorEsquerda);
        contadorEsquerda++;
    }

    printf("\n");
    printf("Simulação de todos os movimentos concluída!\n");

    return 0;
}
