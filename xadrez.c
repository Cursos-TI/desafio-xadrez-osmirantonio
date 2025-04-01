#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimentar o Cavalo com loops aninhados
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
    
    printf("\n");
}

// Função recursiva e com loops aninhados para movimentar o Bispo
void moverBispoAninhado(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Chamando funções para cada peça
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");
    
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");
    
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");
    
    moverCavalo();
    
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoAninhado(5, 5);
    printf("\n");
    
    return 0;
}

    

