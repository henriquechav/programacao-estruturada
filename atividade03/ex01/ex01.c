#include <stdio.h>

void exibeMatriz (int a, int b, int m[a][b]) {
    printf("A matriz digitada é:\n");
    
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;
    
    printf("Digite o tamanho da matriz:\n");
    scanf("%i", &linhas);
    scanf("%i", &colunas);
    
    int matriz[linhas][colunas];
    
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            printf("Digite o elemento (%i, %i):\n", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    exibeMatriz(linhas, colunas, matriz);
    
    return 0;
}
