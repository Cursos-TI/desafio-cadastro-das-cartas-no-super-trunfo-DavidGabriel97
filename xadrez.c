#include <stdio.h>




// Definições de constantes para o número de movimentos das peças
#define CASAS_TORRE 4
#define CASAS_BISPO 4
#define CASAS_RAINHA 5
#define MOV_CAVALO 3

// ----------------------------------------------------------

void moverTorre(int passo, int limite) {
    if (passo > limite) // condição de parada
        return;

    printf("Passo %d: Direita\n", passo);
    moverTorre(passo + 1, limite); // recursiva
}

// ----------------------------------------------------------

void moverBispo(int passo, int limite) {
    if (passo > limite)
        return;

    printf("Passo %d:\n", passo);
    for (int i = 0; i < 1; i++) { // movimento vertical
        printf("  Cima\n");
        for (int j = 0; j < 1; j++) { // movimento horizontal
            printf("  Direita\n");
        }
    }

    moverBispo(passo + 1, limite); // recursiva
}

// ----------------------------------------------------------

void moverRainha(int passo, int limite) {
    if (passo > limite)
        return;

    printf("Passo %d: Cima e Direita\n", passo);
    moverRainha(passo + 1, limite);
}

// ----------------------------------------------------------

void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        printf("Movimento %d:\n", i + 1);

        for (int j = 0; j < 3; j++) {
            if (j < 2) { // duas casas para cima
                printf("  Cima\n");
                continue; // volta para o início do loop
            }

            if (j == 2) { // uma casa para a direita
                printf("  Direita\n");
                break; // encerra o loop 
            }
        }
        
    }
}

// ----------------------------------------------------------

int main() {
    printf("==========================================\n");
    printf("   Simulador de Movimentação de Xadrez\n");
    printf("==========================================\n\n");

    printf("=== Movimento da TORRE ===\n");
    moverTorre(1, CASAS_TORRE);

    printf("\n=== Movimento do BISPO ===\n");
    moverBispo(1, CASAS_BISPO);

    printf("\n=== Movimento da RAINHA ===\n");
    moverRainha(1, CASAS_RAINHA);

    printf("\n=== Movimento do CAVALO ===\n");
    moverCavalo(MOV_CAVALO);

    printf("\n==========================\n");
    printf("Fim da simulação.\n");
    printf("============================\n");

    return 0;
}
