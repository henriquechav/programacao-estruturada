#include <stdio.h>

int main() {
    int numero,
        quantidade = 0,
        soma = 0;
        
    float media;
        
    printf("Digite valores positivos ou -1 para sair:\n");
    
    do {
        scanf("%i\n", &numero);
        if (numero != -1) {
            soma += numero;
            quantidade++;   
        }
    } 
    while (numero != -1);
    
    media = (float) soma / quantidade;
    printf("A média é: %.6f", media);
    
    return 0;
}
