#include <stdio.h>

/* =====================================================
   FUNÇÕES RECURSIVAS - TORRE, BISPO E RAINHA
   ===================================================== */

/* -------------------------------
   Função recursiva para a TORRE
   -------------------------------
   - Move-se em linha reta (horizontal ou vertical)
   - Aqui, moveremos 5 casas para a direita
*/
void moverTorre(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return; // Caso base: fim da recursão

    printf("Direita (%d)\n", passoAtual);
    moverTorre(passoAtual + 1, totalPassos); // chamada recursiva
}

/* -------------------------------
   Função recursiva para o BISPO
   -------------------------------
   - Move-se na diagonal
   - Usa loops aninhados dentro da recursão
   - Loop externo = movimento vertical (Cima)
   - Loop interno = movimento horizontal (Direita)
*/
void moverBispo(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return; // Caso base

    // Loops aninhados dentro da função recursiva
    for (int vertical = 1; vertical <= 1; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita (%d)\n", passoAtual);
        }
    }

    moverBispo(passoAtual + 1, totalPassos); // chamada recursiva
}

/* -------------------------------
   Função recursiva para a RAINHA
   -------------------------------
   - Pode se mover em todas as direções
   - Aqui, moveremos 8 casas para a esquerda
*/
void moverRainha(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return; // Caso base

    printf("Esquerda (%d)\n", passoAtual);
    moverRainha(passoAtual + 1, totalPassos); // chamada recursiva
}

/* =====================================================
   LOOPS COMPLEXOS PARA O CAVALO
   ===================================================== */
/*
   O cavalo move-se em "L":
   - 2 casas em uma direção (Cima)
   - 1 casa perpendicular (Direita)

   Usaremos loops aninhados com múltiplas variáveis e
   controle de fluxo com 'continue' e 'break'
*/
void moverCavaloComplexo() {
    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do CAVALO (duas casas para cima e uma para a direita):\n");

    // Loop externo: sobe 2 casas
    for (int i = 1, j = casasCima; i <= casasCima && j > 0; i++, j--) {
        if (i == 0) continue; // condição redundante para demonstrar uso do 'continue'
        printf("Cima (%d)\n", i);
    }

    // Loop interno: 1 casa à direita, controlando o fluxo com break
    for (int k = 1; k <= casasDireita; k++) {
        printf("Direita (%d)\n", k);
        if (k == casasDireita) break; // sai após completar o movimento
    }
}

/* =====================================================
   FUNÇÃO PRINCIPAL
   ===================================================== */

int main() {
    // -------------------------------
    // Movimento da TORRE (recursivo)
    // -------------------------------
    printf("Movimento da TORRE (para a direita):\n");
    moverTorre(1, 5);
    printf("\n");

    // -------------------------------
    // Movimento do BISPO (recursivo + loops aninhados)
    // -------------------------------
    printf("Movimento do BISPO (diagonal cima-direita):\n");
    moverBispo(1, 5);
    printf("\n");

    // -------------------------------
    // Movimento da RAINHA (recursivo)
    // -------------------------------
    printf("Movimento da RAINHA (para a esquerda):\n");
    moverRainha(1, 8);
    printf("\n");

    // -------------------------------
    // Movimento do CAVALO (loops complexos)
    // -------------------------------
    moverCavaloComplexo();
    printf("\n");

    printf("Simulação completa dos movimentos concluída!\n");
    return 0;
}
