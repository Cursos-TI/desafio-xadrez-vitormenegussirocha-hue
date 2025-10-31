#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da TORRE (usando for)
    // -------------------------------
    // A torre move-se em linha reta — simularemos 5 casas para a direita.

    int casasTorre = 5; // número de casas que a torre vai se mover
    printf("Movimento da TORRE (para a direita):\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // -------------------------------
    // Movimento do BISPO (usando while)
    // -------------------------------
    // O bispo move-se na diagonal — simularemos 5 casas para cima e à direita.

    int casasBispo = 5; // número de casas que o bispo vai se mover
    int contadorBispo = 1;

    printf("Movimento do BISPO (diagonal cima-direita):\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // -------------------------------
    // Movimento da RAINHA (usando do-while)
    // -------------------------------
    // A rainha pode mover-se em todas as direções — simularemos 8 casas para a esquerda.

    int casasRainha = 8; // número de casas que a rainha vai se mover
    int contadorRainha = 1;

    printf("Movimento da RAINHA (para a esquerda):\n");

    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    // Fim do programa
    printf("Simulação de movimentos concluída!\n");

    return 0;
}
