#include <stdio.>
int main() {
    // Movimento da Torre - 5 casas para a direita usando FOR
    int i;
    printf("Movimento da Torre:\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na diagonal (Cima Direita) usando WHILE
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while(j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha - 8 casas para a esquerda usando DO-WHILE
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    // Movimento do Cavalo - 2 para baixo e 1 para a esquerda usando loops aninhados
    printf("\nMovimento do Cavalo:\n");

    int l, passo = 0; 

    for(l = 1; l <= 2; l++) { 
        printf("cima\n");

        
        if (l == 2) {
            while(passo < 1) {
                printf("Esquerda\n");
                passo++;
            }
        }
    }

    return 0;
}