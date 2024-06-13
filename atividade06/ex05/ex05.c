#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int seed;
    int randnum;
    int n;
    
    printf("Digite a quantidade de números:\n");
    scanf("%d", &n);
    
    printf("Digite o valor da seed:\n");
    scanf("%d", &seed);
    srand(seed);
    
    fp = fopen("exemplo.txt", "w");
    
    for (int i=0; i < n; ++i) {
        randnum = rand() % 11;
        fprintf(fp, "%d\n", randnum);
        printf("%d ", randnum);
    }
    
    fclose(fp);
    
    // segunda parte do programa - calcular média
    int soma = 0;
    float media;
    int num;
    
    fp = fopen("exemplo.txt", "r");
    
    for (int i=0; i < n; ++i) {
        fscanf(fp, "%d", &num);
        soma = soma + num;
    }
    
    fclose(fp);
    
    media = (float) soma / n;
    
    printf("Média = %.2f", media);
    
    return 0;
}
