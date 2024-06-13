#include <stdio.h>
#include <stdlib.h>

#define LIN 10
#define COL 5

void exibeMatriz (int a, int b, int m[a][b]) {
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int seed, 
        matriz[LIN][COL], 
        transposta[COL][LIN];
    
    printf("Digite o valor da seed:\n");
    scanf("%i", &seed);
    srand(seed);
    
    for (int i=0; i<LIN; i++) {
        for (int j=0; j<COL; j++) {
            matriz[i][j] = rand() % 10;
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("A matriz é:\n");
    exibeMatriz(LIN, COL, matriz);
    
    printf("A transposta é:\n");
    exibeMatriz(COL, LIN, transposta);

    return 0;
}
