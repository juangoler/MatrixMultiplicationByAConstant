#include <stdio.h>

int main() {
    int matriz[6][6], soma = 0, somaDiagonal = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
            if (i == j) {
                somaDiagonal += matriz[i][j];
            }
        }
    }

    printf("\nSoma de todos os elementos: %d\n", soma);
    printf("Soma dos elementos da diagonal principal: %d\n", somaDiagonal);
    
    return 0;
}
